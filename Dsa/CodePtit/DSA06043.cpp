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

ll dpL[NMAX];
ll dpR[NMAX];

void solve() {
    cin >> n;
    

    FOR (1, n, i) cin >> a[i];
    FOR (1, n, i) {
        dpL[i] = dpL[i - 1] + a[i];
    }
    dpR[n + 1] = 0;
    FORR (n, 1, i) {
        dpR[i] = dpR[i + 1] + a[i];
    }
    int res = -1;
    FOR(2, n, i) {
        if (dpL[i - 1] == dpR[i + 1]) {
            res = i;
            break;
        }
    }
    cout << res << '\n';
    FOR(1, n + 1, i) dpL[i] = 0, dpR[i] = 0;
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