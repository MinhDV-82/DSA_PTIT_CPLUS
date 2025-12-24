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
int n;
string k;

map<string, bool>dd;
string x[10005];

vector<string>res;

void sinh(int j) {
    if (j > n) {
        if (x[n] != k) {
            return;
        }
        string tmp = "";
        FOR(1, n, i) {
            tmp += x[i] + " ";
        }
        res.push_back(tmp);
        cout << '\n';
        return;
    }
    FOR(1, n, i) {
        if (dd[a[i]]) continue;
        dd[a[i]] = true;
        x[j] = a[i];
        sinh(j + 1);
        dd[a[i]] = false;
    }
}


void solve() {
    cin >> n;
    FOR(1, n, i) cin >> a[i];
    cin >> k;
    sinh(1);
    sort(res.begin(), res.end());
    for (auto x : res) {
        cout << x << '\n';
    }
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