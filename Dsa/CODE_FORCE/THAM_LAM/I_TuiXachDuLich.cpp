#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define fi first
#define se second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()
#define dsort(a, n) sort(a + 1, a + 1 + n)


int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void solve() {
    cin >> n >> k;
    FOR(1, n, i) cin >> a[i];
    dsort(a, n);
    int l = 1, r = n;
    int res = 0;

    while(l <= r) {
        if (a[l] + a[r] > k) {
            res++;
            r--;
        }
        else if (a[l] + a[r] <= k) {
            res++;
            r--;
            l++;
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