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
ll a[NMAX];
ll n, k;

void solve() {
    cin >> n >> k;
    FOR (1, n, i) cin >> a[i];
    sort (a + 1, a + 1 + n);
    ll res = 0;
    int j = 2;
    for (int i = 1; i <= n; i++) {
        while(j <= n && a[j] - a[i] < k) j++;
        res = res + j - i - 1;
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