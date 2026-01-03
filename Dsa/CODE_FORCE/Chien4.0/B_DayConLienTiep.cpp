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
int a[NMAX];
int n, k;

void pre() {
    
}

void solve() {
    cin >> n;
    int vMax = 0;
    FOR(1 ,n , i) cin >> a[i], vMax = max(a[i], vMax);
    int ans = 1;
    int cnt = 1;
    FOR(1, n - 1, i) {
        if (a[i] == vMax && a[i + 1] == vMax) {
            cnt++;
        }
        else {
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    cout << ans; 
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