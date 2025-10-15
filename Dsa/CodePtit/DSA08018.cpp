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

int mask[] = {6, 8};

vector<ll>res;

void T (ll num, int cnt) {
    if (cnt > n) {
        return;
    }
    if (num != 0) res.push_back(num);
    for (auto x : mask) {
        T(num * 10 + x, cnt + 1);
    }
}

void solve() {
    res.clear();
    cin >> n;
    T(0, 0);
    sort(res.begin(), res.end());
    cout << res.size()  << '\n';
    for (auto x : res) {
        cout << x << ' ';
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