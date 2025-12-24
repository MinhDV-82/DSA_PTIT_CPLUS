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
ll a[NMAX];
ll n, k;

void solve() {
    cin >> n >> k;
    FOR(1, n, i) cin >> a[i];
    sort(a + 1, a + 1 + n);
    ll s1 = 0, s2 = 0;
    k = min(k, n - k);
    FOR(1, k, i) {
        s1 += a[i];
    }
    FOR(k + 1, n, i) {
        s2 += a[i];
    }
    cout << abs(s2 - s1) << '\n';
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    while(t--)
        solve();
}