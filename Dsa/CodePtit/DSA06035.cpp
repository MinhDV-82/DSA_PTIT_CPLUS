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
int a[NMAX];
int n, k;

int dpL[100005];
int dpR[100005];

void solve() {
    cin >> n;
    FOR (1, n, i) cin >> a[i];

    a[0] = -1;
    a[n + 1] = -1;
    int res = 1;

    FOR (1, n, i) {
        dpL[i] = dpR[i] = 1;
    }

    FOR (2, n, i) {
        if (a[i] > a[i - 1]) {
            dpL[i] = dpL[i - 1] + 1;
        }
    }

    FORR (n - 1, 1, i) {
        if (a[i] > a[i + 1]) {
            dpR[i] = dpR[i + 1] + 1;
        }
    }

    FOR (1, n, i) {
        res = max(res, dpL[i] + dpR[i] - 1);
    }
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