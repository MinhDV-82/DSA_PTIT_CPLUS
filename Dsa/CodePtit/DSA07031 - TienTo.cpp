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

bool isOp(string &s) {
    return s == "+" || s == "-" || s == "/" || s == "*";
}

ll getNum(string &s ) {
    bool ok = s[0] == '-';
    ll num = 0;
    int i = ok ? 1 : 0;
    while(i < s.size()) {
        num = num * 10 + s[i] - '0';
        i++;
    }
    return ok ? num * -1 : num;
}

void solve() {
    int n;
    cin >> n;
    vector<string>v(n + 5);
    FOR(0, n - 1, i) cin >> v[i];
    stack<ll>st;
    for (int i = v.size() - 1; i >= 0; i--) {
        if (!isOp(v[i])) {
            st.push(getNum(v[i]));
        }
        else {
            ll x = st.top();st.pop();
            ll y = st.top();st.pop();
            ll cal = x + y;

            if (v[i] == "+")  cal = x + y;
            if (v[i] == "-")  cal = x - y;
            if (v[i] == "*")  cal = x * y;
            if (v[i] == "/")  cal = x / y;
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