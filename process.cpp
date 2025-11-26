#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct ProcessInfo
{
    DWORD pid;      
    string name;   
    HANDLE handle; 
    bool isRunning;
};

vector<ProcessInfo> processes;

static inline string trim(const string &s)
{
    auto a = s.find_first_not_of(" \t\r\n");
    if (a == string::npos) return "";
    auto b = s.find_last_not_of(" \t\r\n");
    return s.substr(a, b - a + 1);
}

static inline bool isBatchFile(const string &s)
{
    if (s.size() < 4) return false;
    string ext = s.substr(s.size() - 4);
    transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
    return ext == ".bat";
}

void runProcess(string cmd, bool background)
{
    // Chuẩn hóa
    cmd = trim(cmd);
    if (cmd.empty()) return;

    string commandLine;
    if (isBatchFile(cmd))
    {
        commandLine = "cmd.exe /c " + cmd;
    }
    else
    {
        commandLine = cmd;
    }

    STARTUPINFOA si;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    PROCESS_INFORMATION pi;
    ZeroMemory(&pi, sizeof(pi));

  
    vector<char> cmdBuf(commandLine.begin(), commandLine.end());
    cmdBuf.push_back('\0');

    BOOL ok = CreateProcessA(
        NULL,
        cmdBuf.data(), 
        NULL,
        NULL,
        FALSE,
        0,
        NULL,
        NULL,
        &si,
        &pi);

    if (ok)
    {
        cout << "Process started: " << cmd << " (PID = " << pi.dwProcessId << ")\n";

        CloseHandle(pi.hThread);

        processes.push_back({pi.dwProcessId, cmd, pi.hProcess, true});

        if (!background)
        {
        
            WaitForSingleObject(pi.hProcess, INFINITE);

            DWORD exitCode = 0;
            if (GetExitCodeProcess(pi.hProcess, &exitCode))
            {
                cout << "Process PID=" << pi.dwProcessId << " exited with code " << exitCode << "\n";
            }

            CloseHandle(pi.hProcess);

            for (auto &p : processes)
            {
                if (p.pid == pi.dwProcessId)
                {
                    p.isRunning = false;
                    if (p.handle) { CloseHandle(p.handle); p.handle = NULL; }
                }
            }
        }
    }
    else
    {
        DWORD err = GetLastError();
        cout << "Failed to run: " << cmd << " (Error: " << err << ")\n";
    }
}

int main()
{
    string input;

    while (true)
    {
        cout << "minShell> ";
        if (!getline(cin, input)) break;

        input = trim(input);
        if (input.empty())
            continue;

        if (input == "exit")
            break;

        if (input == "list")
        {
            for (auto it = processes.begin(); it != processes.end(); )
            {
                auto &p = *it;
                if (p.handle == NULL)
                {
                    ++it;
                    continue;
                }

                DWORD exitCode;
                if (GetExitCodeProcess(p.handle, &exitCode))
                {
                    if (exitCode == STILL_ACTIVE)
                    {
                        p.isRunning = true;
                        ++it;
                    }
                    else
                    {
                        p.isRunning = false;
                        cout << "(Reaped) PID=" << p.pid << " exit=" << exitCode << "\n";
                        CloseHandle(p.handle);
                        p.handle = NULL;
                        ++it;
                    }
                }
                else
                {
                    cout << "GetExitCodeProcess failed for PID=" << p.pid << ", err=" << GetLastError() << "\n";
                    ++it;
                }
            }

            for (auto &p : processes)
            {
                cout << "PID: " << p.pid
                     << " | Name: " << p.name
                     << " | Status: " << (p.isRunning ? "Running" : "Stopped")
                     << endl;
            }
            continue;
        }

        bool background = false;
        if (!input.empty() && input.back() == '&')
        {
            background = true;
            input.pop_back();
            input = trim(input);
        }

        runProcess(input, background);
    }

    for (auto &p : processes)
    {
        if (p.handle)
        {
            CloseHandle(p.handle);
            p.handle = NULL;
        }
    }

    return 0;
}
