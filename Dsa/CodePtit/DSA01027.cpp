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
bool dd[11];
int x[11];

void dequy(int j) {
    if (j > n) {
        FOR(1, n, i) {
            cout << a[x[i]] << ' ';
        }
        cout << '\n';
        return;
    }
    FOR(1, n, i) {
        if (dd[i]) continue;
        x[j] = i;
        dd[i] = true;
        dequy(j + 1);
        dd[i] = false;
    }
}

void solve() {
    cin >> n;
    FOR(1, n, i) cin >> a[i];
    sort(a + 1, a + 1 + n);
    dequy(1);

}

mainCode {
    sp;
    bool ok = false;
    int t = 1;
    if (ok) {
        cin >> t;
    }
    while(t--)
        solve();
}