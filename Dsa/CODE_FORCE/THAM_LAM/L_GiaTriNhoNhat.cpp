/* =============== */
//! solution by : MinhDV-82
/* =============== */
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
int a[100005];
int b[100005];
int n, k;


void pre() {
    
}

void solve() {
    cin >> n;
    FOR(1, n, i) cin >> a[i] >> b[i];
    ll res = 0;
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);
    
    int X = a[n / 2];
    int Y = b[n / 2];

    FOR(1, n, i) res += abs(X - a[i]);
    FOR(1, n, i) res += abs(X - b[i]);

    cout << res;
}

mainCode {
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}