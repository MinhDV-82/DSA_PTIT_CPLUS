#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

vector<string>res;

void sinhNP(int n, string s) {
    if (s.size() == n) {
        res.push_back(s);
        // cout << s << '\n';
        return;
    }

    for (char i = '0'; i <= '1'; i++) {
        sinhNP(n, s + i);
    }
}

bool dx(string s) {
    for (int i = 0; i < s.size() / 2; i++) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    sinhNP(n, "");
    for (auto x : res) {
        if (dx(x)) {
            for(auto c : x) {
                cout << c << ' ';
            }
            cout << '\n';
        }

    }
}

mainCode {
    sp;
    solve();
}