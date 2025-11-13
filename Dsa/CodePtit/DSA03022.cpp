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
    ll res;
    sort(a + 1, a + 1 + n);
    ll min1 = a[1];
    ll min2 = a[2];
    ll max1 = a[n];
    ll max2 = a[n - 1];
    ll max3 = a[n - 2];
    res = max(min1 * min2, max1 * max2);
    res = max(res, max(min1 * min2 * max1, max2 * max1 * max3));
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