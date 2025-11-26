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

bool vis[100005];
vector<int> adj[100005];
vector<pair<int, int>> dsCanh;

int bfs(pair<int, int> dg)
{
    FOR(1, n, i)
    {
        vis[i] = false;
    }

    queue<int> q;
    int st = dg.first;
    int ed = dg.second;

    q.push(1);
    int cnt = 0;
    vis[1] = true;
    cnt++;

    while (!q.empty())
    {
        int g = q.front();
        q.pop();
 
        for (auto x : adj[g])
        {
            if (g == st && x == ed || g == ed && x == st)
            {
                continue;
            }

            if (!vis[x])
            {
                vis[x] = true;
                q.push(x);
                cnt++;
            }
        }
    }

    return cnt == n; 
}

void solve()
{
    cin >> n >> k;
    FOR(1, n, i)
    {
        adj[i].clear();
        vis[i] = false;
      
    }
    
    dsCanh.clear();

    FOR(1, k, i)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);

        if (x < y)
            dsCanh.push_back({x, y});
        else
            dsCanh.push_back({x, y});
    }

    sort(dsCanh.begin(), dsCanh.end());

    for (auto it : dsCanh)
    {
        if (bfs(it) == false)
        {
            cout << it.first << " " << it.second << " ";
        }
    }

    cout << '\n';
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