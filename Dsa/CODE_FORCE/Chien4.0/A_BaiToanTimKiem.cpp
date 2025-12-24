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
    int s;
    cin >> n >> s >> k;
    int sum = 0;
    FOR(1, n, i) {
        cin >> a[i];
        if (i <= s) {
            sum += a[i];
        }
    }
    int res = -1;
    int preS = 0;
    FOR(1, s, i) {
        int tmp = sum - preS;
        if (tmp <= k) {
            res = i;
            break;
        } 
        preS += a[i];
    }
    cout << res << '\n';
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