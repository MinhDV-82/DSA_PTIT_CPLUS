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
    int res = 0;
    cin >> n;
    FOR(1, n, i) cin >> a[i];   
    FOR(1, n, i) {
        int minP = i;
        FOR(i + 1, n, j) {
            if (a[j] < a[minP]) {
                minP = j;
            }
        }
        if (i != minP) {
            res++;
            swap(a[i],  a[minP]);
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