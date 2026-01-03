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
    cin >> k;
    string s; cin >> s;
    priority_queue<int>pq;
    map<char, int>mp;
    for (auto c : s) mp[c]++;
    for (auto x : mp) {
        pq.push(x.second);
    }
    while (k--)
    {
        int x = pq.top();
        pq.pop();
        x--;
        pq.push(x);
    }
    ll res = 0;
    while(!pq.empty()) {
        ll x = pq.top();
        res +=  x * x;
        pq.pop();
    }
    cout << res << '\n';
    
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