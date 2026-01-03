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

bool dddfs[10005];
bool ddbfs[10005];
vector<int> adj[10005];

int pardfs[10005];
int parbfs[10005];

void dfs(int u, int v)
{
    pardfs[u] = v;
    dddfs[u] = true;
    for (auto x : adj[u])
    {
        if (dddfs[x])
            continue;
        dddfs[x] = true;
        dfs(x, u);
    }
}

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    ddbfs[u] = true;
    parbfs[u] = 0;
    while (!q.empty())
    {
        int x = q.front();
        ddbfs[x] = true;
        q.pop();
        for (auto y : adj[x])
        {
            if (ddbfs[y])
                continue;
            ddbfs[y] = true;
            parbfs[y] = x;
            q.push(y);
        }
    }
}

void indfs(int u, int p[], bool rev)
{
    vector<int> ve;
    while (u != 0)
    {
        ve.push_back(u);
        u = p[u];
    }

    if (ve.size() == 1)
    {
        cout << -1 << '\n';
        return;
    }

    if (rev)
    {
        for (int i = ve.size() - 1; i >= 0; i--)
            cout << ve[i] << ' ';
    }
    else
    {
        FOR(0, ve.size() - 1, i)
            cout << ve[i] << ' ';
    }

    cout << '\n';
}

void solve()
{
    cin >> n >> k;
    FOR(1, k, i)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    FOR(1, n, i)
    {
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(1, 0);
    bfs(1);
    FOR(2, n, i)
    {
        indfs(i, pardfs, true);
        indfs(i, parbfs, false);
    }
}

mainCode
{
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases)
    {
        cin >> t;
    }
    pre();

    while (t--)
        solve();
}