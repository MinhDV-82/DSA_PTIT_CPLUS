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

vector<int> adj[200005];
int visited[200005];

int cal(int start)
{

    queue<int> q;
    q.push(start);
    visited[start] = true;
    int cnt = 1;

    while (!q.empty())
    {
        int u = q.front(); 
        q.pop();
        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
                cnt++;
            }
        }
    }
    return cnt;
}

void solve()
{
    cin >> n >> k;
    FOR(1, n, i)
    {
        adj[i].clear();
        visited[i] = false;
    }
    FOR(1, k, i)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int res = 0;
    FOR(1, n, i)
    {
        if (!visited[i])
        {
            res = max(res, cal(i));
        }
    }
    cout << res << '\n';
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