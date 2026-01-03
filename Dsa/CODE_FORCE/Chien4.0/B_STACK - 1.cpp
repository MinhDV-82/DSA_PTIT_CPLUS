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
    map<int, string>mp;
    stack<int>st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') st.push(i);
        else if (s[i] == ')') {
            if (st.empty()) {
                mp[i] = "-1";
            }
            else {
                int x = st.top();
                st.pop();
                mp[x] = "0";
                mp[i] = "1";
            }
        }
    }
    while(!st.empty()) {
        mp[st.top()] = "-1";
        st.pop();
    }
    string res = "";
    FOR(0, s.size() - 1, i) {
        if (mp[i] != "") {
            res = res + mp[i];
            continue;
        }
        else res = res + s[i];
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