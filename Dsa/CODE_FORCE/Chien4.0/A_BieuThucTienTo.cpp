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

bool isOp(string s) {
    return s == "+" || s== "-" || s== "*" || s == "/";
};

int getNum(string s) {
    ll num = 0, i = 0;
    bool ok = false;
    if (s[0] == '-') {
        i++;
        ok = true;
    }

    while(i < s.size()) {
        num = num * 10 + (s[i] - '0');
        i++;
    }
    if (ok) num *= -1;

    return num;
}

void solve() {
    cin >> n;
    vector<string> s(n + 5);

    FOR(1, n, i) {
        cin >> s[i];
        //cout << s[i] << ' ';
    }

    stack<ll>st;
    for (int i = s.size() - 1; i >= 0; i--) {
        if (!isOp(s[i])) {
            st.push(stoi(s[i]));
        }
        else {
            ll y = (st.top());if (!st.empty()) st.pop();
            ll x = (st.top());if (!st.empty()) st.pop();
            ll ans = 0;
            if (s[i] == "+") {
                ans = x + y;
            }
            if (s[i] == "-") {
                ans = y - x;
            }
            if (s[i] == "/") {
                ans = y / x;
            }
            if (s[i] == "*") {
                ans = x * y;
            }
            st.push(ans);
        }
    }
    st.pop();
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