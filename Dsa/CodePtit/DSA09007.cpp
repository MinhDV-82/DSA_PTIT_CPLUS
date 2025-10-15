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
int n, k, u;
vector<int> vG[200005];
bool dd[200005];
int parrent[200005];

void bfs(int start, int end)
{
    if (start == end) {
        cout << start << '\n';
        return;
    }
    queue<int> q;
    q.push(start);
    int pre = start;
    stack<int> st;
    while (!q.empty())
    {
        int graph = q.front();
        q.pop();
        dd[graph] = true;

        if (graph == end)
        {
            break;
        }
        for (auto x : vG[graph])
        {
            if (dd[x])
                continue;
            q.push(x);
            dd[x] = true;
            parrent[x] = graph;
        }
    }
    int tmp = end;
    if (parrent[tmp] == 0)
    {
        cout << -1 << '\n';
        return;
    }
    while (parrent[tmp] != start)
    {
        st.push(parrent[tmp]);
        tmp = parrent[tmp];
    }
    cout << start << ' ';
    while (!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << end << '\n';
}

void solve()
{
    int u, v;
    cin >> n >> k >> u >> v;
    FOR(1, n, i)
    {
        dd[i] = false;
        parrent[i] = 0;
        vG[i].clear();
    }
    FOR(1, k, i)
    {
        int x, y;
        cin >> x >> y;
        vG[x].push_back(y);
        vG[y].push_back(x);
    }
    bfs(u, v);
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