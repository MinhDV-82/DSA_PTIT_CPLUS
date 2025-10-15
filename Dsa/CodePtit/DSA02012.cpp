#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;
int m[1005][1005];
ll dp[1005][1005];

void solve()
{
    cin >> n >> k;

    FOR(1, n, i)
    {
        FOR(1, k, j)
        {
            dp[i][j] = 0;
        }
    }

    FOR(1, n, i)
    {
        FOR(1, k, j)
        {
            cin >> m[i][j];
        }
    }

    dp[1][1] = 1;
    FOR(1, n, i)
    {
        FOR(1, k, j)
        {
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
        }
    }
    cout << dp[n][k] << '\n';
}

mainCode
{
    sp;
    bool ok = true;
    int t = 1;
    if (ok)
    {
        cin >> t;
    }
    while (t--)
        solve();
}