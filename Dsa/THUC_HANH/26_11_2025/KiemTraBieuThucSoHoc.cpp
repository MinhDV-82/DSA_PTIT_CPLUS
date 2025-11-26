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

void solve() {
    string s;
    cin.ignore();
    getline(cin, s);

    stack<char>st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') continue;
        if (s[i] != ')') {
            st.push(s[i]);
        }
        else if (s[i] == ')') {
            char operations[4] = {'*', '+', '-', '/'};
            bool ok = false;
            while(!st.empty()) {
               
                for (auto x : operations) {
                    if (st.top() == x) {
                        ok = true;
                    }
                }
         
                st.pop(); 
                if (!st.empty() && st.top() == '(') {
                    st.pop();
                    break;
                }
            }
       
            if (!ok) {
                cout << "Yes" << '\n';
                return;
            }
        }
    }
    cout << "No" << '\n';
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