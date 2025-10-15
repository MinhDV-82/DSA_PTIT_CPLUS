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

ll s[NMAX];

void solve() {
    cin >> n;
    FOR(1, n, i) {
        cin >> a[i];
        s[i] = s[i - 1] + (-a[i]);
    }

    ll res = 0;
    FOR(1, n, i) {
        cout << s[n] - s[i] << '\n';
        res = res + abs((n - i) - abs(s[n] - s[i + 1]));
    }

    cout << res << '\n';

}

mainCode {
    sp;
    bool ok = false;
    int t = 1;
    if (ok) {
        cin >> t;
    }
    while(t--)
        solve();
}