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

struct node
{
    int cnt;
    int p;
} par[10005];

bool dd[1005];

vector<int> adj[1005];


void dfs(int p, int u, int cnt)
{

    par[u].p = p;
    par[u].cnt = cnt;

    dd[u] = true;

    for (auto g : adj[u])
    {
        if (!dd[g])
        {
            dd[g] = true;
            dfs(u, g, cnt + 1);
        }
    }
}

int calTwoNode(int u, int v)
{
    if (u == v)
    {
        return 0;
    }
    int res = 0;
    int n1 = par[u].cnt;
    int n2 = par[v].cnt;
    while (u != v)
    {
        if (n1 > n2)
        {
            u = par[u].p;
            n1--;
            res++;
        }
        else if (n1 < n2)
        {
            v = par[v].p;
            n2--;
            res++;
        }
        else
        {
            u = par[u].p;
            v = par[v].p;
            res += 2;
        }
    }

    return res;
}

void solve()
{
    cin >> n;
    FOR(1, n, i) {
        dd[i] = false;
        adj[i].clear();
    }
    FOR(1, n - 1, i)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    

    dfs(-1, 1, 1);
    // for (int i = 1; i <= n; i++) {
    //     cout << par[i].p <<' ';
    // }
    // cout << '\n';

    int q;
    cin >> q;
    while(q--) {
        int x, y;
        cin >> x >> y;
        int oo = calTwoNode(x, y);
        cout << oo << '\n';
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
    while (t--)
        solve();
}