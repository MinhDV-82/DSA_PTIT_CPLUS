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

bool cmp(const int &a, const int &b) {
    return abs(k - a) < abs(k - b);
}

void solve() {
    cin >> n >> k;
    FOR(1, n, i) cin >> a[i];
    stable_sort(a + 1, a + 1 + n, &cmp);
    FOR (1, n, i) {
        cout << a[i];
        if (i != n) cout << ' ';
    }
    cout << '\n';
}

mainCode {
    sp;
    int t;
    cin >> t;
    while (t--)
    solve();
}