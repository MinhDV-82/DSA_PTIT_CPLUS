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

ll x, y, z;

struct da{
    ll x;
    ll y;
};

da das[100005];
map<int, int>mp;

void solve() {
    cin >> n >> x >> y >> z;
    FOR(1, n, i) {
        int u, v;
        cin >> u >> v;
        mp[u] += (y - x);
        mp[v + 1] += z - y;
    }
     ll res = n * x;
     ll s = res;
    for (auto x : mp) {
        s += x.second;
         res = max(res, s);
    }
    cout << res;
   
    
}

mainCode {
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    while(t--)
        solve();
}