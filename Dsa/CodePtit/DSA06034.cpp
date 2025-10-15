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
ll a[NMAX];
ll n, k;

void solve() {
    cin >> n >> k;
    map<ll, ll>mp;
    mp[0] = 1;
    ll res = 0;

    FOR (1, n, i) {
        cin >> a[i];

        res = res + mp[k - a[i]];
        mp[a[i]]++;
    }
    
    cout << res << '\n';
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