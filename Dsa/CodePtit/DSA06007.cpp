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
int lMin[NMAX];
int lMax[NMAX];

void solve() {
    cin >> n;
    lMin[n + 1] = INT_MAX;
    lMax[0] = INT_MIN;
    FOR (1, n, i) {
        cin >> a[i];
        lMax[i] = max(lMax[i - 1], a[i]);
    }
    FORR (n, 1, i) {
        lMin[i] = min(lMin[i + 1], a[i]);
    }

    int l = 1, r = n;

    while(l + 1 <= n && a[l] <= lMin[l + 1]) l++;
    while(r - 1 >= 0 && a[r] >= lMax[r - 1]) r--;
 
    cout << l <<' ' << r << '\n';
  
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