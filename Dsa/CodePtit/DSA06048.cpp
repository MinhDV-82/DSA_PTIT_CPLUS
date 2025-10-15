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
    int maxV = INT_MIN;
    FOR (1, n, i) {
        cin >> a[i];
        maxV = max(maxV, a[i]);
    }
    int res = 0;
    FOR (1, n, j) {
        if (a[j] == maxV) {
            res = j;
            if (j == n) {
                res = 0;
            }
            break;
        }
    }
    cout << res << '\n';
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