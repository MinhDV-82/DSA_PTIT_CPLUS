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

bool ok(string s) {
    for (int i = 1; i < s.size() - 1; i++) {
        if (s[i] == s[i - 1] && s[i] == 'H') {
            return false;
        }
    }
    return s[0] == 'H' && s[s.size() - 1] == 'A';
}

char mask[3] = {'A', 'H'};
vector <string> res;
void sol(string s = "") {
    if (s.size() == n ) {
        if (ok(s)) cout << s << '\n';
        return;
    }
    for (int i = 0; i < 2; i++) {
        sol(s + mask[i]);
    }
}

void solve() {
    res.clear();

    cin >> n;
    sol();
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