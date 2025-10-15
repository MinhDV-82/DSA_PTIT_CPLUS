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
int a[NMAX], b[NMAX];
int m, n, k;

void solve() {
    cin >> m >> n >> k;
    FOR(1, m, i) cin >> a[i];
    FOR(1, n, j) cin >> b[j];
    int l1 = 1, r1 = m, l2 = 1, r2 = n;
    vector<int>res;
    while(l1 <= r1 && l2 <= r2) {
        int x = (a[l1] <= b[l2]) ? a[l1++] : b[l2++];
        res.push_back(x);
    }
    while(l1 <= r1) {
        res.push_back(a[l1++]);
    }
    while(l2 <= r2) {
        res.push_back(b[l2++]);
    }
    cout << res[k - 1] << '\n';
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