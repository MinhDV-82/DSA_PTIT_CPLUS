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

void solve() {
    cin >> n >> k;
    FOR(1, n, i) {
        adj[i].clear();
    }
    FOR(1, k, i) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    //sort(adj->begin(), adj->end());
    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
        cout << i << ": ";
        for (auto x : adj[i]) {
            cout << x << ' ';
        }
        cout << '\n';
    }
    cout << '\n';
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    while(t--)
        solve();
}