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
// int a[NMAX];
int n, k;

void solve() {
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    cin >> n;
    FOR(1, n, i) {
        int x;
        cin >> x;
        if (x < min1) {
            min2 = min1;
            min1 = x;
        }
        else if (x < min2 && x != min1) {
            min2 = x;
        }
    }
    if (min2 == INT_MAX) {
        min2 = -1;
        cout << min2 << '\n';
        return;
    }
    cout << min1 << ' ' << min2 << '\n';
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