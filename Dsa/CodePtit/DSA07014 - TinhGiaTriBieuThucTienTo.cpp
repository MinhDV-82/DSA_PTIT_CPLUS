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

bool isOp(char x) {
    char m[4] = {'+', '-', '*', '/'};
    for (auto c : m) {
        if (c == x) {
            return true;
        }
    }
    return false;
}

int getNum(string s) {

}

void solve() {
    string s;
    cin >> s;
    stack<int>st;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (!isOp(s[i])) {
            st.push(s[i] - '0');
        }
        else {
            int x = st.top();st.pop();
            int y = st.top();st.pop();
            int cal;
            if (s[i] == '+') cal = x + y;
            if (s[i] == '-') cal = x - y;
            if (s[i] == '*') cal = x * y;
            if (s[i] == '/') cal = x / y;
            st.push(cal);
        }
    }
    
    cout << st.top() << '\n';

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