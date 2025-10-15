#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

ll dp[NMAX];

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        FOR(1, n, i)
        dp[i] = 0;

        FOR(1, n, i)
            cin >> a[i];
        dp[0] = 0;
        dp[1] = a[1];

        FOR(2, n, i)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
        }
        cout << dp[n] << '\n';
    }
}

mainCode
{
    sp;
    solve();
}