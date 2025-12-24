/* =============== */
//! solution by : MinhDV-82
/* =============== */
#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define fi first
#define se second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void pre() {
    
}

bool ok(ll m) {
    int cnt = 1;
    int so = a[1] + m;
    for (int i = 2; i <= n; i++) {
        if (a[i] >= so) {
            so = a[i] + m;
            cnt++;
        }
    }
    return cnt >= k;
}

void solve() {
    cin >> n >> k;
    FOR(1, n, i) cin >> a[i];
    sort(a + 1, a + 1 + n);

    int l = 1, r = 1e9;
    int res = 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if (ok(m)) {
            l = m + 1;
            res = m;
        }
        else {
            r = m - 1;
        }
    }
    cout << res;

}

mainCode {
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}