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

vector<string>res;

void sinh(string s = "") {
    if (s.size() == n) {
        // cout << s << ' ';
        res.push_back(s);
        return;
    }
    for (char i = '0'; i <= '1'; i++) {
        sinh(s + i);
    }
}

void solve() {
    cin >> n;
    sinh();
    sort(res.begin(), res.end());
    for (auto x : res) cout << x << ' ';
    cout << '\n';
}

mainCode {
    sp;
    int t;
    cin >> t;
    while(t--)
    solve();
}