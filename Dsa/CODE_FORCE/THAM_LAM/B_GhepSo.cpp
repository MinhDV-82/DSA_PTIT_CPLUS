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
string a[NMAX];
int n, k;

bool cmp(string &a, string &b) {
    return a + b> b + a;
}

void solve() {
    cin >> n;
    FOR(1, n, i) {
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n, cmp);

    string res = "";
    for (int i = 1; i <= n; i++) {
        res += a[i];
    }

    cout << res;
}

mainCode {
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    while(t--)
        solve();
}