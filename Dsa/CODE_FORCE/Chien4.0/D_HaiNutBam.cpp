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
ll n, k;

void pre() {
    
}

bool dd[2000005];

void solve() {
    ll n, m;
    cin >> n >> m;
    queue<ll>q;

    q.push(n);
    int cnt = -1;
    while (!q.empty())
    {
        cnt++;
        int n = q.size();
        for (int i = 0; i < n; i++) {
            ll x = q.front();
            q.pop();

            if (x == m) {
                cout << cnt;
                return;
            }
            if (x  <= m && !dd[x * 2]) {
                dd[x * 2] = true;
                q.push(x * 2);
            }
            if (x - 1 > 0 && !dd[x - 1]) {
                dd[x - 1] = true;
                q.push(x - 1);
            }
        }
    }
    cout << cnt;
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