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
int m, n;
int ma[505][505];
int dp[505][505];

void solve() {
    cin >> m >> n;
    FOR(1, m, i) {
        FOR(1, n, j) {
            cin >> ma[i][j];
        }
    }
    
    FOR(1, m, i) {
        FOR(1, n, j) {
            dp[i][j] = 
        }
    }
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