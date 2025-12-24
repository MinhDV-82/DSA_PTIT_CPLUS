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

string dp[48];
ll x[49];
void pre() {
    dp[0] = "A";
    dp[1] = "B";
    x[0] = 1;
    x[1] = 1;
    for (int i = 2; i <= 45; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        if (i <= 10) cout << dp[i] << '\n';
        x[i] = x[i - 1] + x[i - 2];
    }
    cout << x[45];
}

void solve() {
    cin >> n;
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}