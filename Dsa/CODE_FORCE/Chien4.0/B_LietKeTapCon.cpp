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


bool cmp(pair<vector<int>, int>&a, pair<vector<int>, int>&b) {
    if (a.second < b.second) return true;

    if (a.second == b.second)
        return (a.first < b.first);
    
    return false;
}

void solve() {
    cin >> n >> k;
    FOR(1, n, i) cin >> a[i];
    vector<pair<vector<int>, int>>ans;
    for (int i = 1; i < (1 << n); i++) {
        vector<int>p;
        int s = 0;
        for (int j = 0; j < n; j++) {
            
            if (i & (1 << j)) {
                s += a[j + 1];
                p.push_back(j + 1);
            }
        }
        if (s < k) {
            ans.push_back({p, s});
        }
    }
    sort(ans.begin(), ans.end(), cmp);
    for (auto x : ans) {
        for (auto v : x.first) {
            cout << v << ' ';
        }
        cout << '\n';
        cout << "Sum = " << x.second << '\n';
    }
    if (ans.size() == 0) cout << - 1;
}

mainCode {
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}