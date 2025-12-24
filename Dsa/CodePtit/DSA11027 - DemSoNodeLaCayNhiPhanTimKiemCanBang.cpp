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

int count(int l, int r) {
    if (l > r) return 0;
    if (l == r) return 1;
    int m = (l + r) >> 1;
    int cnt1 = count(l, m - 1);
    int cnt2 = count(m + 1, r);

    if (cnt1 + cnt2 == 0) return 1;

    return cnt1 + cnt2;
}

void solve() {
    cin >> n;
    FOR(0, n - 1, i) {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    int ans = count(0, n - 1);
    cout << ans << '\n';
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}