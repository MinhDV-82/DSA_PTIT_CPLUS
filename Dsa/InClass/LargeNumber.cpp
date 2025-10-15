#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

string cong(string a, string b)
{
    string res = "";

    if (a.size() < b.size())
        swap(a, b);
    int nho = 0;
    int n1 = a.size();
    int n2 = b.size();

    for (int i = n2; i < n1; i++)
    {
        b = "0" + b;
    }

    FORR(n1 - 1, 0, i)
    {
        int so = (a[i] - '0') + (b[i] - '0') + nho;
        nho = so / 10;
        res = char(so % 10 + '0') + res;
    }

    if (nho != 0)
        res = char(nho + '0') + res;

    return res;
}

bool cmp(string a, string b) {
    if (a.size() > b.size()) return true;
    if (a.size() < b.size()) return false;
    return a >= b;
}

string tru(string a, string b)
{
    string res = "";
    bool isNegative = false;
    if (!(cmp(a, b))) {
        swap(a, b);
        isNegative = true;
    }
    int n1 = a.size();
    int n2 = b.size();

    for (int i = n2; i < n1; i++) {
        b = "0" + b;
    }

    int nho = 0;
    FORR(n1 - 1, 0, i) {
        int soA = a[i] - '0';
        int soB = b[i] - '0';

        int hieu = soA - soB - nho;
        if (hieu < 0) {
            hieu += 10;
            nho = 1;
        } else {
            nho = 0;
        }

        res = char(hieu + '0') + res;
    }

    while(res.size() > 1 && res[0] == '0') {
        res.erase(0, 1);
    }

    if (isNegative) res = '-' + res;
    
    return res;
}

string nhan(string a, string b) {
    if (a == "0" || b == "0") return "0";

    // Xử lý dấu

    if (a.size() < b.size()) swap(a, b); 
    int n1 = a.size();
    int n2 = b.size();
    string res = "0";


    for (int j = n2 - 1; j >= 0; j--) {
        int soB = b[j] - '0';
        int nho = 0;
        string tmp = "";

        for (int k = 0; k < n2 - 1 - j; k++) tmp += "0";

        for (int i = n1 - 1; i >= 0; i--) {
            int soA = a[i] - '0';
            int tich = soA * soB + nho;
            tmp = char(tich % 10 + '0') + tmp;
            nho = tich / 10;
        }
        if (nho) tmp = char(nho + '0') + tmp;

        res = cong(res, tmp);
    }

    while (res.size() > 1 && res[0] == '0') res.erase(0, 1);

    return res;
}

string chia(string a, string b) {
    if (b == "0") throw runtime_error("Divide by zero");
    if (a == "0") return "0";

    if (!cmp(a, b)) return "0";

    string res = "";
    string cur = "";

    for (int i = 0; i < a.size(); i++) {
        cur += a[i]; 

        while (cur.size() > 1 && cur[0] == '0') cur.erase(0, 1);

        int count = 0;
        while (cmp(cur, b)) {
            cur = tru(cur, b);
            if (cur[0] == '-') cur = "0"; 
            count++;
        }

        res += char(count + '0');
    }

    while (res.size() > 1 && res[0] == '0') res.erase(0, 1);

    return res;
}

string layDu(string a, string b) {
    return tru(a, nhan(chia(a, b), b));
}

void solve()
{
    string a, b;
    cin >> a >> b;
    // cout << a << ' ' << b << '\n';
    // cout << tru(a, b);
    // cout << chia(a, b);
    cout << layDu(a, b);
}

mainCode
{
    sp;
    solve();
}