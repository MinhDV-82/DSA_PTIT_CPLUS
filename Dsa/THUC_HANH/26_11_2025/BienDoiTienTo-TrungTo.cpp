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

bool isOperatior(char x) {
    return x == '*' || x == '+' || x == '-' || x == '/';
}

void solve() {
    string s;
    cin >> s;
    
    stack<string>st;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (!isOperatior(s[i])) {
            st.push(string(1, s[i]));
        }
        else {
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string res = "(" + s1 + s[i] + s2 + ")";
            st.push(res);   
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
    while(t--)
        solve();
}