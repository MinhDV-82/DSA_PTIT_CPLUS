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

vector<int>adj[2005];
int visited[2005];

bool check(int start, int end) {
    queue<int>q;
    q.push(start);
    while(!q.empty()) {
        int g = q.front();
        visited[g] = true;
        q.pop();
        if (g == end) {
            return true;
        }
        for (auto x : adj[g]) {
            if (visited[x]) continue;
            q.push(x);
        }
    }
    return false;
}

void solve() {
    cin >> n >> k;
    FOR(1, n, i) {
        adj[i].clear();
        visited[i] = false;
    }
    FOR(1, k, i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int q;
    cin >> q;
    while(q--) {
        int x, y;
        cin >> x >> y;
        if (check(x, y)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << '\n';
        FOR(1, n, i) {
            visited[i] = false;
        }
    }
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