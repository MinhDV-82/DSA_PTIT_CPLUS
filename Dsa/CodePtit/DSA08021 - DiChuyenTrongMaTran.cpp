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
int a[1005][1005];
int n, k;

void pre() {
    
}

bool dd[1005][1005];
bool isValid(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= k;
}

int bfs() {
    queue<pair<int, int>>q;
    q.push({1, 1});
    int res = -1;
    dd[1][1] = true;
    while(!q.empty()){
        int si = q.size();
        res++;
        FOR(1, si, i) {
            auto p = q.front();q.pop();
            if (p.fi == n && p.se == k) return res; 
            
            int nx = p.fi + a[p.fi][p.se];
            int ny = p.se + a[p.fi][p.se];
            if (isValid(p.fi, ny) && !dd[p.fi][ny]) {
                q.push({p.fi, ny});
                dd[p.fi][ny] = true;
            }
              if (isValid(nx, p.se) && !dd[nx][p.se]) {
                q.push({nx, p.se});
                dd[nx][p.se] = true;
            }
        }
    }
    return -1;
}

void solve() {
    cin >> n >> k;
    FOR(1, n, i) FOR(1, k, j) {
        cin >>a[i][j];
        dd[i][j] = false;
    }
    cout << bfs() << '\n';
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}