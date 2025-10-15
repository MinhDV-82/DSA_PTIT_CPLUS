#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Cấu trúc lưu thông tin tiến trình
struct ProcessInfo
{
    DWORD pid;      // ID của tiến trình
    string name;    // Tên lệnh/tiến trình (nguyên bản để hiển thị)
    HANDLE handle;  // Handle để quản lý tiến trình
    bool isRunning; // Trạng thái
};

// Danh sách các tiến trình background
vector<ProcessInfo> processes;

// Utility: trim cả hai đầu
static inline string trim(const string &s)
{
    auto a = s.find_first_not_of(" \t\r\n");
    if (a == string::npos) return "";
    auto b = s.find_last_not_of(" \t\r\n");
    return s.substr(a, b - a + 1);
}

// Helper: kiểm tra file .bat
static inline bool isBatchFile(const string &s)
{
    if (s.size() < 4) return false;
    string ext = s.substr(s.size() - 4);
    // chuyển về chữ thường
    transform(ext.begin(), ext.end(), ext.begin(), ::tolower);
    return ext == ".bat";
}

// Hàm chạy một tiến trình
void runProcess(string cmd, bool background)
{
    // Chuẩn hóa
    cmd = trim(cmd);
    if (cmd.empty()) return;

    // Nếu là .bat, gọi qua cmd.exe /c
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

    // CreateProcess có thể sửa buffer command line, vì vậy phải dùng buffer có thể thay đổi
    vector<char> cmdBuf(commandLine.begin(), commandLine.end());
    cmdBuf.push_back('\0');

    BOOL ok = CreateProcessA(
        NULL,
        cmdBuf.data(), // mutable buffer
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

        // Đóng handle luồng chính vì chúng ta không dùng nữa (tránh leak)
        CloseHandle(pi.hThread);

        // Lưu handle tiến trình để sau này check/kill
        processes.push_back({pi.dwProcessId, cmd, pi.hProcess, true});

        if (!background)
        {
            // Foreground: chờ tiến trình kết thúc
            WaitForSingleObject(pi.hProcess, INFINITE);

            // Lấy exit code (tùy chọn)
            DWORD exitCode = 0;
            if (GetExitCodeProcess(pi.hProcess, &exitCode))
            {
                cout << "Process PID=" << pi.dwProcessId << " exited with code " << exitCode << "\n";
            }

            // Đóng handle tiến trình khi đã hoàn tất
            CloseHandle(pi.hProcess);

            // Và xóa khỏi danh sách processes nếu bạn muốn (nếu đã push ở trên)
            // Ở đây ta đánh dấu là stopped trong danh sách
            for (auto &p : processes)
            {
                if (p.pid == pi.dwProcessId)
                {
                    p.isRunning = false;
                    // đóng handle nếu vẫn mở
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
        if (!getline(cin, input)) break; // EOF

        input = trim(input);
        if (input.empty())
            continue;

        // Nếu gõ exit thì thoát shell
        if (input == "exit")
            break;

        // Lệnh list: in ra danh sách tiến trình
        if (input == "list")
        {
            // Cập nhật trạng thái và đóng handle cho tiến trình đã chết
            for (auto it = processes.begin(); it != processes.end(); )
            {
                auto &p = *it;
                if (p.handle == NULL) // đã xử lý
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
                    // Nếu GetExitCodeProcess lỗi thì vẫn in và tiếp tục
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

        // Kiểm tra có chạy background không (dấu & cuối lệnh). Xử lý an toàn hơn: có thể có khoảng trắng trước/sau
        bool background = false;
        if (!input.empty() && input.back() == '&')
        {
            background = true;
            input.pop_back(); // bỏ ký tự '&'
            input = trim(input); // loại khoảng trắng còn lại
        }

        // Thực thi tiến trình
        runProcess(input, background);
    }

    // Khi thoát shell, đóng mọi handle còn mở
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
