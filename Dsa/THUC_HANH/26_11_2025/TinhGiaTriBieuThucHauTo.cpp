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

bool isDigit(char x) {
    return x >= '0' && x <= '9';
}

void solve() {
    string s;
    cin >> s;
    
    stack<long long>st;
    for (int i = 0; i < s.size(); i++) {
        if (isDigit(s[i])) {
            st.push(s[i] - '0');
        }
        else {
            long long s1 = st.top();
            st.pop();
            long long s2 = st.top();
            st.pop();
            
            ll res = 0;
            if (s[i] == '+') res = s2 + s1;
            else if (s[i] == '-') res = s2 - s1;
            else if (s[i] == '*') res = s1 * s2;
            else res = s2 / s1;
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