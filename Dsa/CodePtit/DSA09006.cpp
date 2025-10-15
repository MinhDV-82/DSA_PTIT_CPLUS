#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k, u;
vector<int>vG[200005];

bool dd[200005];
int parrent[200005];

void dfs(int p, int g, int target) {    
    dd[g] = true;

    // if (p != g) {
    // cout << g << ' ' << '\n';
    parrent[g] = p;
    // }
    if (g == target) {
    
        return;
    }

    if (vG[g].size() == 0) {
        return;
    }
    for (auto x : vG[g]) {
        if (!dd[x]) {
            dfs(g, x, target);
        }
    }
}

void solve() {
    int u, v;
    cin >> n >> k >> u >> v;
    FOR(1, n, i) {
        dd[i] = false;
        parrent[i] = 0;
        vG[i].clear();
    }
    FOR(1, k, i) {
        int x, y;
        cin >> x >> y;
        vG[x].push_back(y);
        vG[y].push_back(x);
    }
    dfs(u, u, v);
    
    stack<int>s;
    int target = v;
    if (parrent[v] == 0) {
        cout << -1 << '\n';
        return;
    }
    while(parrent[v] != u) {
        s.push(parrent[v]);
        v = parrent[v];
    }
   cout << u << ' ';
    while(!s.empty()) {
        cout << s.top() << ' ';
        s.pop();
    }
    cout << target ;
    cout << '\n';
}

mainCode {
    sp;
    bool ok = true;
    int t = 1;
    if (ok) {
        cin >> t;
    }
    while(t--)
        solve();
}