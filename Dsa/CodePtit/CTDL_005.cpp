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
    vector<int>res;
    FOR(1, n, i) cin >> a[i];
    int k;
    cin >> k;

    FOR(1, n, j) {
        if (a[j] != k) {
            res.push_back(a[j]);
        }
    }

    for (auto x : res) {
        cout << x << ' ';
    }
}

mainCode {
    sp;
    solve();
}