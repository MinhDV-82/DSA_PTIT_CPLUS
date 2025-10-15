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
vector<int>adj[100005];
bool dd[100005];
bool check[100005];

void bfs(int start) {
    queue<int>q;
    q.push(start);
    while (!q.empty())
    {
        int g = q.front();
        q.pop();
        dd[g] = true;
        for (auto x : adj[g]) {
            if (dd[x]) continue;
            q.push(x);
        }
    }
}

void solve() {
    cin >> n >> k;
    int res = 0;
    FOR(1, n, i) {
        adj[i].clear();
        dd[i] = false;
        check[i] = false;
    }
    FOR(1, k, i) {
        int x, y;
        cin >> x >> y;
       adj[x].push_back(y);
        adj[y].push_back(x);
        check[x] = true;
        check[y] = true;
    }

    FOR(1, n, i) {
        if (!dd[i]) {
            res++;
            bfs(i);
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