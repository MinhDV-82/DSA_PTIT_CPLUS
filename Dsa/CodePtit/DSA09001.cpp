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
vector<int> g[200005];

void solve()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++) g[i].clear();

    FOR(1, k, i)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        // if (g[i].size() != 0)
        // {   
            sort(g[i].begin(), g[i].end());
            cout << i << ": ";
            for (auto x : g[i])
            {
                cout << x << ' ';
            }
            cout << '\n';
        // }
    }
    cout << '\n';
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