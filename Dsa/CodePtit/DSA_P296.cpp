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
ll dp[NMAX];


void solve() {
    cin >> n >> k;
    FOR(1, n, i) {
        cin >> a[i];
        if (a[i] >= 0) {
            dp[i] = dp[i - 1] + a[i];
        }
        else dp[i] = dp[i - 1];
    }

    FOR(1, k, q) {
        int l, r;
        cin >> l >> r;
        cout << dp[r] - dp[l - 1] << '\n';
    }
}

mainCode {
    sp;
    int t;
    solve();
}