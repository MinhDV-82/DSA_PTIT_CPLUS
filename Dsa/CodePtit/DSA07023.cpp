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

    getline(cin , s);
    stack<string>st;
    stringstream words(s);
    string word;
    while(words >> word) {
        st.push(word);
    }
    while(!st.empty()) {
        cout << st.top();
        st.pop();
        if (st.size() != 0) cout << ' ';
    }
    cout << '\n';
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
        cin.ignore();
    }
    pre();

    while(t--)
        solve();
}