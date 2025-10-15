#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int n, k;

void solve() {
    cin >> n >> k;
    int res = 0;
    FOR(1, n, i) {
        int x;
        cin >> x;
        if (x == k) res++;
    }
    if (res == 0) {
        cout << -1;
    }
    else {
        cout << res;
    }
    cout << '\n';
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