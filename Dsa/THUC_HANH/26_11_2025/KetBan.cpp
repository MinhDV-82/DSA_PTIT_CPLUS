#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define fi first
#define se second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

bool vis[100005];
vector<int>adj[100005];

void dfs(int g, int &cnt) {
    cnt+=1;
    
    for (auto x : adj[g]) {
        if (vis[x]) continue;
        vis[x] = true;
  
        dfs(x, cnt);
    }
}


void solve() {
    cin >> n >> k;
    FOR(1, n, i) {
        adj[i].clear();
        vis[i] = false;
    }

    FOR(1, k, i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int res = 0;
    FOR(1, n, i) {
        if (vis[i]) continue;

        int cnt = 0;
        vis[i] = true;
        dfs(i, cnt);
        res = max(res, cnt);
    }
    cout << res << '\n';
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    while(t--)
        solve();
}