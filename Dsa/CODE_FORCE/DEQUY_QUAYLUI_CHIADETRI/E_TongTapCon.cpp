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

void solve() {
    cin >> n >> k;
    FOR(1, n, i) cin >> a[i];
    int res = 0;
    FOR(1, (1 << n) - 1, i) {
        int  s = 0;
        FOR(1, n, j) {
            if (i & 1 << (j - 1)) {
                s += a[j];
            } 
        }
        if (s == k) {
            res++;
        }
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