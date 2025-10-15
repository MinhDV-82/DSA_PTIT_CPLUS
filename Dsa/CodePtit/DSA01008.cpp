#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

int count(string s) {
    int cnt = 0;
    for (auto x : s) {
        if (x == '1') cnt++;
    }
    return cnt;
}

void sol(string s = "") {
    if (s.size() == n) {
        if (count(s) == k) {
            cout << s << '\n';
        }
        return;
    }
    for (char c = '0'; c <= '1'; c++) {
        sol(s + c);
    }
}

void solve() {
    cin >> n >> k;
    sol();
}

mainCode {
    sp;
    int t;
    cin >> t;
    while(t--)
    solve();
}