#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define fi first
#define se second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e7 + 5;
pair<int, int> a[NMAX];
int n, k;



bool cmp(pair<int, int> &x, pair<int, int> &y) {
    return x.first - x.second < y.first - y.second;
}

void solve() {
    cin >> n;
    for (int i = 1; i <= n * 2; i++) {
        cin >> a[i].first >> a[i].second;
    }
    sort(a + 1, a + 1 + n * 2, cmp);

    ll sA = 0, sB = 0;
    ll res = 0;
    for (int i = 1; i <= n; i++) {
        res += a[i].first;
    }
    FOR(n + 1, n * 2, i) res += a[i].second;
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