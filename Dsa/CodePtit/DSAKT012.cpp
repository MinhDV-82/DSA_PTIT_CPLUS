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
int n, tarMoney;

int res = INT_MAX;

bool dd[32];

void sol(int j, int totalMoney, int steps)
{
    if (totalMoney == 0)
    {
        res = min(res, steps);
        return;
    }

    if (totalMoney < 0 || j == n || steps >= res) return;

    for (int i = j; i <= n; i++)
    {
        if (dd[i])
            continue;
        dd[i] = true;
        if (totalMoney >= 0)
        {
            sol(i + 1, totalMoney - a[i], steps + 1);
        }
        dd[i] = false;
    }
}

void solve()
{
    cin >> n >> tarMoney;
    FOR(1, n, i)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n, greater<int>());
    sol(1, tarMoney, 0);
    if (res == INT_MAX) cout << -1;
    else cout << res;
}

mainCode
{
    sp;
    bool ok = false;
    int t = 1;
    if (ok)
    {
        cin >> t;
    }
    while (t--)
        solve();
}