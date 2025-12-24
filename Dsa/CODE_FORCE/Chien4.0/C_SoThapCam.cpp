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

bool ok(int x) {
    int cnt = 0;
    while(x > 0) {
        cnt += x % 10;
        x /= 10;
        if (cnt > 10) return false;
    }
    return cnt == 10;
}

void solve() {
    int cnt = 1;
    FOR(1, 1000000, i) {
        if (ok(i)) cnt++;
    }
    cout << cnt;
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