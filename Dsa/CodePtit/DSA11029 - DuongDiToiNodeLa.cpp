/* =============== */
//! solution by : MinhDV-82
/* =============== */
#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define fi first
#define se second
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void pre()
{
}

bool dd[100005], leaf[100005];
vector<int> adj[100005];
int par[100005];

void dfs(int u, int v, int &res)
{
    dd[u] = true;
    par[u] = v;
    
    bool isLeaf = true;
    for (auto x : adj[u])
    {
        if (!dd[x])
        {
            dd[x] = true;
            dfs(x, u, res);
            isLeaf = false;
        }
    }
    leaf[u] = isLeaf;
}

void path(int u)
{
    vector<int>v;
    while (u != 0)
    {
        v.push_back(u);
        u = par[u];
    }
    for (int i = v.size() - 1; i >= 0; i--) cout << v[i] << ' ';
    cout << '\n';
}

void solve()
{
    cin >> n;
    FOR(1, n, i)
    {
        adj[i].clear();
        dd[i] = leaf[i] = false;
        par[i] = 0;
    }
    FOR(1, n - 1, i)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int res = 0;
    dfs(1, 0, res);
    FOR(1, n, i)
    {
        if (leaf[i]) {
            path(i);
        }
    }
}

mainCode
{
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases)
    {
        cin >> t;
    }
    pre();

    while (t--)
        solve();
}