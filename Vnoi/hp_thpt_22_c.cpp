#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

pair<ll, ll>p[25];
int n;
ll x;

bool ok(long long t) {
    long long amountEgg = 0;
    FOR(1, n, i) {
        amountEgg += (t - p[i].first) / p[i].second;

        if (t >= p[i].first) {
            amountEgg++;
        }
    }

    return amountEgg >= x;
}

ll solve() {
    ll l = 1, r = 1e18;
    ll res = 0;
    while(l <= r) {
        ll m = (l + r) >> 1;
        if (ok(m)) {
            r = m - 1;
            res = m;
        }
        else {
            l = m + 1;
        }
    }
    return res;
}



mainCode {
    sp;

    cin >> n >> x;
    FOR(1, n, i) cin >> p[i].first >> p[i].second;

    cout << solve();

}