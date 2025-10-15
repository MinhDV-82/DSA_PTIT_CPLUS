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
    cin >> n;
    FOR(1, n, i) cin >> a[i];
    sort(a + 1, a + 1 + n);
    ll x = 0;
    ll y = 0;
    a[n + 1] = 1;
    for (int i = 1; i <= n; i ++) {
        if (i % 2 == 1) x = x * 10 + a[i];
        else y = y * 10 + a[i];
    }
    
    cout << x + y << '\n';
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