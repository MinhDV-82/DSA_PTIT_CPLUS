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
int n, k, m;

bool vis[100005];
vector<int> adj[100005];
vector<pair<int, int>> dsCanh;

int color[100005];

bool isSafe(int u, int c) {
    for (auto x : adj[u]) {
        if (color[x] == c) return false;
    }
    return true;
}

bool backtrackColors(int u) {
    if (u == n + 1) return true;

    for (int c = 1; c <= m; c++) {
        if (isSafe(u, c)) {
            color[u] = c;
            if (backtrackColors(u + 1)) return true;
            color[u] = 0;
        }
    }

    return false;
}

void solve()
{
    cin >> n >> k >> m;
    FOR(1, n, i)
    {
        adj[i].clear();
        color[i] = 0;
    }
    
    FOR(1, k, i)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    if (backtrackColors(1)) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
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
