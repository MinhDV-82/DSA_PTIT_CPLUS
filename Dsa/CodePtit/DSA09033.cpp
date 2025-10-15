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
int n, k;
vector<int>v[200005];
bool dd[200005];
bool cntApperence[200005];

void dfs(int u) {
    dd[u] = true;
    for (auto x : v[u]) {
        if (dd[x]) continue;
        dd[x] = true;
        dfs(x);
    }
}

void solve() {
    cin >> n >> k;
    FOR(1, n, i) {
        v[i].clear();
        dd[i] = false;
        cntApperence[i] = false;
    }
     
    FOR(1, k, i) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
        cntApperence[x] = true;
        cntApperence[y] = true;
    }
    dfs(1);
    string res = "YES";
    FOR(1, n, i) {
        if (cntApperence[i] && !dd[i]) {
            res = "NO";
            break;
        }
    }
    cout << res << '\n';
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