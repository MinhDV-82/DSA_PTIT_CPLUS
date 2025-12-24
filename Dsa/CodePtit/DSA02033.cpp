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

bool vis[1005];
int x[105];

bool check() {
    for (int i = 2; i <= n; i++) {
        if (abs(x[i] - x[i-1]) == 1) return false;
    }
    return true;
}

void sinh(int j) {
    if (j > n) {
        if (check()) {
            FOR(1, n, i) {
                cout << x[i];
            }
            cout << '\n';
        }
        return;
    }
    FOR(1, n, i) {
        if (!vis[i]) {
            vis[i] = true;
            x[j] = i;
            sinh(j + 1);
            vis[i] = false;
        }
    }
}

void solve() {
    cin >> n;
    sinh(1);
    for (int i = 1; i <= 10; i++) vis[i] = false;
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    while(t--)
        solve();
}