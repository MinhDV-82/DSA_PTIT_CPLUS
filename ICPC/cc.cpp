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

ll const NMAX = 1e6 + 5;
ll a[NMAX];
ll n, k;

ll s[NMAX];

void solve()
{
    cin >> n;
    FOR(1, n, i)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, greater<ll>());

    FOR(1, n, i)
    {
        s[i] = s[i - 1] + a[i];
    }

    ll res = 0;

    for (ll i = 1; i < n; i++)
    {
        ll tmp = a[i] * (n - i);
        ll sum = s[n] - s[i];

        res += tmp - sum;
    }
    cout << res;
}

mainCode
{
    solve();
}