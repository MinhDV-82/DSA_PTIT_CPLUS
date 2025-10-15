#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

void solve() {
    int n, c, x;
    ll s = 0;
    cin >> n >> c;
    FOR(1, n, i) {
        cin >> x;
        s += x;
    }

    ll res = s / c;
    if (s % c != 0) {
        res++;
    }

    cout << res;

}

mainCode {
    sp;
    solve();
}