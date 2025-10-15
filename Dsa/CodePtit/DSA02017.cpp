#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[10][10];
int n, k;
bool dd[10][10];



bool check(int x, int y) {
    for (int i = x, j = y; i >= 0 && j >= 0; i--, j--) {
        if (dd[i][j]) return false;
    }
    for (int i = x; i >= 0; i--) {
        if (dd[i][y]) return false;
    }
    for (int i = x, j = y; i >= 0 && j <= n; i--, j++) {
        if (dd[i][j]) return false;
    }

    return true;
}

void sol(int i, ll &res) {
    if (i > n) {
        ll s = 0;
        FOR(1, n, i) {
            FOR(1, n, j) {
                if (dd[i][j]) s += a[i][j];
            }
        }
        res = max(res, s);
        return;
    }
    FOR(1, 8, j) {
        if (check(i, j)) {
            dd[i][j] = true;
            sol (i + 1, res);
            dd[i][j] = false;
        }
    }
}

void solve() {
    n = 8;
    FOR(1, 8, i) {
        FOR(1, 8, j) {
            cin >> a[i][j];
        }
    }
    ll res = 0;
    sol(1, res);
    cout << res << '\n';
}

mainCode {
    sp;
    bool ok = true;
    int t = 1;
    if (ok) {
        cin >> t;
    }
    while(t--)
        solve();
}