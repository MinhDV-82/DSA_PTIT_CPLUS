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

void bfs(int g) {
    queue<int>q;
    q.push(g);
    dd[g] = true;
    while(!q.empty()) {
        int x = q.front();
        q.pop();
        cout << x << ' ';
        for (auto v : vG[x]) {
            if (dd[v]) continue;
            dd[v] = true;
            q.push(v);
        }
    }
}

void solve() {
    cin >> n >> k >> u;
    FOR(1, n, i) {
        dd[i] = false;
        vG[i].clear();
    }
    FOR(1, k, i) {
        int x, y;
        cin >> x >> y;
        vG[x].push_back(y);
        vG[y].push_back(x);
    }
    bfs(u);
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