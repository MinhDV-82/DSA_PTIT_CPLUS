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
vector<int>adj[100005];

void pre() {
    
}

bool v[100005];
void dfs(int u, int &cnt) {
    v[u] = true;
    cnt++;
    for (auto x : adj[u]) {
        if (!v[x]) {
            v[x] = true;
            dfs(x, cnt);
        }
    }
}

void solve() {
    cin >> n >> k;
    FOR(1, k, i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
    }
 
    vector<int>ans;
    int res = INT_MAX;
    vector<pair<int, int>>p;
    FOR(1, n, i) {
        int tmp = 1;
        int cnt = 0;
        dfs(i, cnt);
        FOR(1, n, j) {
            if (!v[j]) {
                dfs(j, cnt);
                tmp++;
            }
        }
        FOR(1, n, j) {
            v[j] = false;
        }
        p.push_back({tmp, tmp});
        res = min(res, tmp);
    }
  
    
    cout << res ;
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