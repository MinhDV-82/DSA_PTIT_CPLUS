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
ll n, s;

int tong(ll num)
{
    int x = 0;
    while (num > 0)
    {
        x += num % 10;
        num /= 10;
    }
    return x;
}

void solve()
{
    cin >> n >> s;
    ll l = 1, r = LONG_MAX, m;
    ll res = -1;
    ll tmp = n;
    while (l <= r)
    {
        m = (l + r) >> 1;
        tmp = n + m;
        if (tong(tmp) > s)
        {
            r = m - 1;
            res = m;
        }
        else
        {
            l = m + 1;
        }
    }
    cout << res << '\n';
}

mainCode
{
    sp;
    int t;
    cin >> t;
    while (t--)
        solve();
}