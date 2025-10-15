#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int n;
int dd[15];
int x[15];

void sol(int j) {
    if (j > n) {
        FOR(1, n, i) {
            cout << x[i];
        }
        cout << " ";
        return;
    }
    FORR(n, 1, i) {
        if (dd[i]) continue;
        dd[i] = true;
        x[j] = i;
        sol(j + 1);
        dd[i] = false;
    }
}

void solve() {
    cin >> n;
    sol(1);
    cout << '\n';
}

mainCode {
    sp;
    int t;
    cin >> t;
    while(t--)
    solve();
}