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
    ll res = 1;
    while (n > 0)
    {
        if (n & 1) {
            res = res % MOD * x % MOD;
        }
        x = x % MOD * x % MOD;
        n /= 2;
    }
    return res;
}

void solve() {
    ll n , b;
    cin >> n >> b;
    cout << mu(n , b) << '\n';
}

mainCode {
    sp;
    int t;
    cin >> t;
    while(t--)
    solve();
}