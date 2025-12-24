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
    string s;
    cin >> s;
    set<char>st;
    FOR(0, s.size() - 1, i) {
        st.insert(s[i]);
    }
    int dif = st.size();
    queue<pair<char, int>>q;
    map<char, int>mp;
    int curDir = 0;
    
    int res = INT_MAX;

    for (int i = 0; i < s.size(); i++) {
        if (mp[s[i]] == 0) {
            curDir++;
        }
    
        mp[s[i]]++;
        q.push({s[i], i});
        
        while(!q.empty() && curDir == dif) {
            auto c = q.front();
            q.pop();
            mp[c.fi]--;
            res = min(res, i - c.se + 1);
            if (mp[c.fi] == 0) {
                curDir--;
            }
        }
    }
    cout << res  << '\n';
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