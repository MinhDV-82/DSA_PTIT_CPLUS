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
    string s;
    cin >> s;
    int r = s.size() - 1;
    while(r >= 0) {
        if (s[r] == '0') {
            s[r] = '1';
            break;
        }
        r--;
    }
    for (int i = r + 1; i < s.size(); i++) {
        s[i] = '0';
    }

    cout << s << '\n';
}

mainCode {
    sp;
    int t;
    cin >> t;
    while(t--)
    solve();
}