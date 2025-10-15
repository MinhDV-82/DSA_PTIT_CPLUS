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
int m[1005][1005];
vector<int>adj[10005];

void solve() {
    
    cin >> n;
    cin.ignore();
    FOR(1, n, i) {
        FOR(1, n, j) {
            cin >> m[i][j];
            if (m[i][j] == 1) {
                adj[i].push_back(j);
            }
        }
    }
    FOR(1, n, i) {
        if (adj[i].size() != 0) {
            for (auto x : adj[i]) {
                cout << x << ' ';
            }
            cout << '\n';
        }
    }
    
}

mainCode {
    sp;
    bool ok = false;
    int t = 1;
    if (ok) {
        cin >> t;
    }
    while(t--)
        solve();
}