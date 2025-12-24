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

int const mMax = 1e9;

void pre() {
    
}

int xa, ya, xb, yb;

bool isValid(int x, int y) {
    return x >= 0 && x <= mMax && y >= 0 && y <= mMax;
}

int bfs(map<pair<int, int>, bool>&ps) {
    queue<pair<int, int>>q;
    q.push({xa, ya});
    map<pair<int, int>, bool>dd;
    dd[{xa, ya}] = true;


    int res = 0;
    while(!q.empty()) {
        n = q.size();
     
        FOR(1, n, i) {
            auto p = q.front();
            q.pop();
            if (p.first == xb && p.second == yb) {
                return res;
            }
            for (int j = -1 ; j <= 1; j++) {
                for (int k = -1; k <= 1; k++) {
                    if (i == 0 && j == 0) continue;
                    int nx = p.first + j;
                    int ny = p.second + k;
                    
                    if (isValid(nx, ny) && ps[{nx, ny}] && !dd[{nx, ny}]) {
                        dd[{nx, ny}] = true;
                        q.push({nx, ny});
                    }
                }
            }
        }

        res++;
    }
    return -1;
}

void solve() {
   
    cin >> xa >> ya >> xb >> yb;
    cin >> n;
    map<pair<int, int>, bool>ps;
    FOR(1 ,n ,i) {
        int x, y, z;
        cin >> x >> y >> z;
        for(int j = y; j <= z; j++) {
            ps[{x, j}] = true;
        }
    }
    cout << bfs(ps) << '\n';
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