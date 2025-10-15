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

int const NMAX = 1e6 + 10;
int a[NMAX];
int n, k;

int dp[NMAX];
int x[18];

bool check(int num)
{
    if (num <= 100)
        return true;

    int cnt = 0;
    int j = 1;
    while (num > 0)
    {
        x[j] = num % 10;
        j++;
        num /= 10;
    }
    j--;

    for (int i = 1; i <= j / 2; i++) {
        if (x[i] != x[j - i + 1]) {
            cnt++;
        }
    }

    return cnt <= 1;
}

int l, r;
void solve()
{
    cin >> l >> r;
    cout << dp[r] - dp[l - 1] << '\n';
}

mainCode
{
    sp;
    bool ok = true;
    int t = 1;

    FOR(1, NMAX, i)
    {
        if (check(i))
        {
           
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = dp[i - 1];
        }
    }

    if (ok)
    {
        cin >> t;
    }
    while (t--)
        solve();
}