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
    cin.ignore();
}

map<char, char> mp = {
    {'(', ')'},
    {'[', ']'}
};

bool ok(string &s) {
    stack<char>st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[') st.push(s[i]);

        if (s[i] == ')' || s[i] == ']') {
            if (st.empty()) return false;
            char c = mp[st.top()];
            if (c != s[i]) return false;
            st.pop();
        }
    }
    return st.size() == 0;
}

void solve() {
    string s;
    getline(cin , s);
    if (ok(s)) cout << "YES";
    else cout << "NO";
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