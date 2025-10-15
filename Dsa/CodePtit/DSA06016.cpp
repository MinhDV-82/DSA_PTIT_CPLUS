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

void solve() {
    cin >> n >> k;
    ll maxV = INT_MIN;
    ll minV = INT_MAX;
    FOR(1, n, i) {
        ll x; cin >> x;
        maxV = max(maxV, x);
    }
    FOR(1, n, i) {
        ll x; cin >> x;
        minV = min(minV, x);
    }
    cout << (1ll) * minV * maxV << '\n';
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