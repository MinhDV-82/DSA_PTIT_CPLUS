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
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void pre() {
    
}

vector<int>adj[200005];
bool dd[200005];

void dfs(int u) {
    dd[u] = true;
    for (auto x : adj[u]) {
        if (!dd[x]) {
            dd[x] = true;
            dfs(x);
        }
    }
}

void solve() {
    cin >> n >> k;
    FOR(1, k, i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int cnt = 0;
    FOR(1, n, i) {
        if (!dd[i]) {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt;
}

mainCode {
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}