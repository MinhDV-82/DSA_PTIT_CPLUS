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



void solve() {
    cin >> n >> k;
    vector<int>v(n + 5, 0);
    FOR(1, k, i) {
        int x, y;
        cin >> x >> y;
        v[x]++;
        v[y + 1]--;
    }
    FOR(1, n, i) {
        v[i] = v[i - 1] + v[i];
    }
    for (int i = 1; i <= n; i++) {
        if (v[i] & 1) {
            cout << 1 << ' ';
        }
        else {
            cout << 0 << ' ';
        }
    }
    cout << '\n';
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