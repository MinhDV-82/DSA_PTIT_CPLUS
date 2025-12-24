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
        adj[y].push_back(x);
    }
 
    vector<int>ans;
    int tmp = 0;
    dfs(1, tmp);

    FOR(2, n, j) {
        int cnt = 0;
        if (!v[j]) {
            dfs(j, cnt);
            ans.push_back(cnt);
        }
    }
    sort(ans.begin(), ans.end(), greater<int>());
    int res = tmp;
    if (ans.size() != 0) {
        res += ans[0];
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