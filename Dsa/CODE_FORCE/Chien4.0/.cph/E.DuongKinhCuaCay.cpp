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

vector<int>adj[100005];

int res = 0;
int dfs(int u, int p) {
    vector<int>v;
    v.push_back(0);
    v.push_back(0);

    for (auto x : adj[u]) {
        if (x == p) continue;

        int tmp = dfs(x, u) + 1;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), greater<int>());
    res = max(res, v[0] + v[1]);
    
    return v[0];
}

void solve() {
    cin >> n;
    FOR(1, n - 1, i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1, -1);
    cout << res;
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