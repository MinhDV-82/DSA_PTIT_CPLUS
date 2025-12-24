/* =============== */
//! solution by : MinhDV-82
/* =============== */
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
int a[NMAX];
int n, k;

void pre() {
    
}

char v[2] = {'6', '8'};

vector<string>res;

void tryNe(string s = "") {
    if (s.size() > n) return;
    if (s.size() != 0) {
        res.push_back(s);
    }
    for (auto x : v) {
        tryNe(s + x);
    }
}

bool cmp(string &a, string &b) {
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

void solve() {
    res.clear();
    cin >> n;
    tryNe("");
    sort(res.begin(), res.end(), cmp);
    cout << res.size() << '\n';
    for (auto x : res) cout << x << ' ';
    cout << '\n';
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}