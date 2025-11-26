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

ll const MOD = 1e9 + 7;

void solve() {
    cin >> n;

    priority_queue<ll, vector<ll>, greater<ll>>pq;
    for (int i = 1; i <= n; i++) {
        ll x;
        cin >> x;
        pq.push(x);
    }

    ll res = 0;

    while(pq.size() > 1) {
        ll x = pq.top();
        pq.pop();
        ll y = pq.top();
        pq.pop();
        pq.push((x % MOD + y % MOD) % MOD);
        res = (res % MOD + (x % MOD + y % MOD) % MOD) % MOD;
    }
    cout << res << '\n';
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