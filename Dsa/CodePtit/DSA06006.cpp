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

void solve() {
    cin >> n;
    FOR(0, 4, i) a[i] = 0;
    FOR(1, n, i) {
        int x;
        cin >> x;
        a[x]++;
    }
    FOR(0, 2, i) {
        FOR(1, a[i], j) {
            cout << i << ' ';
        }
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