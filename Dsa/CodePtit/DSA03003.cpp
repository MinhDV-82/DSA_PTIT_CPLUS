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
int const MOD = 1e9 + 7;
int a[NMAX];
int n, k;

void solve() {
    cin >> n;
    FOR(0, n - 1, i) cin >> a[i];
    sort(a, a + n);
    ll res = 0;
    FOR(0, n - 1, i) {
        res = (res % MOD + (a[i] % MOD * i % MOD) % MOD) % MOD;
        res %= MOD;
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