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

ll const MOD = 1e9 + 7;
ll dp[100005];

void solve() {

    cin >> n >> k;
    
    dp[1] = 1;
    int res = 0;
    if (n == 1) res++;

    FOR (2, n, i) {
        ll s = 0;
        FOR (max(1, i - k), i, j) {
            dp[i] = ((dp[i] % MOD) + (dp[i - j] % MOD)) % MOD;

            dp[i] %= MOD;
        }
    }
    cout << res << '\n';
    // cout << dp[n] << '\n';
    FOR (0, n, i) dp[i] = 0;
}

mainCode {
    sp;
    int t;
    cin >> t;
    while (t--)
    solve();
}