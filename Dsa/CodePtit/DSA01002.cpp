#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void solve() {
    cin >> n >> k;
    FOR(1, k, i) cin >> a[i];

    int r = k;
    while(r >= 1 && a[r] == n - k + r) {
        r--;
    }

    if (r == 0) {
        for (int i = 1; i <= k; i++) {
            cout << i << ' ';
        }
        cout << '\n';
        return;
    }

    for (int i = 1; i <= r - 1; i++) {
        cout << a[i] << ' ';
    }

    int cnt = 1;
    int v = a[r];
    for (int i = r; i <= k; i++) {
        a[i] = v + cnt;
        cnt++;
        cout << a[i] << ' ';
    }
    cout << '\n';
}

mainCode {
    sp;
    int t;
    cin >> t;
    while(t--)
    solve();
}