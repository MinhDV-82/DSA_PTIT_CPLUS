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

void solve() {
    cin >> n;
    vector<int>v1, v2;
    FOR(1, n, i) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            v1.push_back(a[i]);
        } 
        else v2.push_back(a[i]);
    }

    vector<int>mer;
    for (int i = v1.size() - 1; i >= 0; i--) {
        mer.push_back(v1[i]);
    }
      for (int i = 0; i < v2.size(); i++) {
        mer.push_back(v2[i]);
    }

    int l = 0, r = n - 1;
    string s;
    cin >> s;
    for(auto x : s) {
        if (x == 'F') l++;
        else r--;
    }
    while(l <= r) {
        cout << mer[l++] << ' ';
    }
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