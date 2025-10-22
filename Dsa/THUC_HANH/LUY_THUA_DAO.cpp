#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

ll MOD = 1e9 + 7;

ll mu(ll x, ll n) {
    if (n == 0) return 1;
    if (n == 1) return x % MOD;
    ll tmp = mu(x, n / 2);
    tmp = tmp * tmp % MOD;
    if (n & 1) tmp = tmp * x % MOD;
    return tmp;
}

ll get(ll x) {
    ll n = 0;
    while ( x > 0) {
        n = n * 10 + (x % 10);
        x /= 10;
    }
    return n;
}

void solve() {
    ll n;
    cin >> n;
    cout << mu(n , get(n)) << '\n';
}

mainCode {
    sp;
    int t;
    cin >> t;
    while(t--)
    solve();
}