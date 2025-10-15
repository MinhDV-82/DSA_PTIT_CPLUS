#include<iostream>
#include<algorithm>
using namespace std;

int const NMAX = 1e4 + 5;
int a[NMAX];
int n, k;

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    int l = 1, r = n;
    while (l < r) {
        cout << a[r] << ' ' << a[l] << ' ';
        l++;
        r--;
    }
    if (n & 1) cout << a[l];
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--)
    solve();
}