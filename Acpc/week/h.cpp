#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

vector<vector<int>>g;
int n;
int m;
bool visited[200005];

void dfs(int node, int &cnt) {
    visited[node] = true;
    // cout << node << ' ';
    for (auto x : g[node]) {
        if (!visited[x]) {
            cnt++;
            visited[x] = true;
            dfs(x, cnt);
        }
    }

}

mainCode {
    sp;
    cin >> n >> m;

    g.resize(n + 5);
    FOR(1, n, i) visited[i] = false;

    FOR(1, m, i) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }


    
    int res = 0;
    // int cnt = 1;
    // dfs(1, cnt);
    FOR(1, n, i) {
        int cnt = 1;
        if (!visited[i]) {
            dfs(i, cnt);
        }
        // cout << cnt << ' ';
        res = max(res, cnt);
        // cout << cnt << '\n';
        // for (auto x : g[i]) {
        //     cout << x << ' ';
        // }
        // cout << '\n';
    }
    cout << res;
}