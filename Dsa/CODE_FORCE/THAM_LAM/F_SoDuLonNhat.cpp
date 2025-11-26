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
ll a[NMAX];
int n, k;

void solve() {
    cin >> n;
    ll maxValue = INT_MIN;
    FOR(1, n, i) {
        cin >> a[i];
        maxValue = max(maxValue, a[i]);
    }
    ll res = INT_MIN;
    FOR(1, n, i) {
        res = max(res, a[i] % maxValue);
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