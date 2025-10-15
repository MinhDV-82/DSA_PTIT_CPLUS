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
int lMin[NMAX];

void solve() {
    cin >> n;
    FOR(1, n, i) cin >> a[i];
    lMin[n] = a[n];
    FORR(n - 1, 1, i) {
        lMin[i] = min(lMin[i + 1], a[i]);
    }
    int maxV = INT_MIN;
    vector<int>res;
    FOR(1, n - 1, i) {
        maxV = max(maxV, a[i]);
        if (lMin[i + 1] >= maxV) {
            res.push_back(i);
        }
    }
    cout << res.size() << '\n';
    // if (res.size() == 0) cout << '\n';
    for (auto x : res) {
        cout << x << ' ';
    }
    cout << '\n';
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