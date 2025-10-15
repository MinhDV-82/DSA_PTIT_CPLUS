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
    cin >> n;
    FOR(1, n, i) cin >> a[i];
    int i = n;
    while(i >= 1) {
        if (a[i - 1] < a[i]) {
            i--;
            break;
        }
        i--;
    }
    for (int j = 1; j <= i - 1; j++) {
        cout << a[j];
        cout << ' ';
    }
    for (int j = n; j >= max(i, 1); j--) {
        cout << a[j];
        if (j != max(i, 1)) cout << ' ';
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