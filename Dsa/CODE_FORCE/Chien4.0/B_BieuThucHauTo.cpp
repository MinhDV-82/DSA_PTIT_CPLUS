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

ll getNum(string s) {
    ll num = 0;
    bool ok = s[0] == '-' ? true : false;
    int i = ok ? 1 : 0;
    while(i < s.size()) {
        num = num * 10 + s[i] - '0';
        i++;
    }
    
    num = ok ? num * -1 : num;
    return num;
}

bool isOp(string s) {
    return s == "+" || s == "-" || s == "/" || s == "*"; 
}

void solve() {
    cin >> n;
    vector<string>s(n + 5);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    stack<ll>st;
    FOR(0, n - 1, i) {
        if (!isOp(s[i])) {
            st.push(getNum(s[i]));

        }
        else {
            ll x = st.top();st.pop();
            ll y = st.top();st.pop();
            ll ans = 0;
            if (s[i] == "+") ans = x + y;
            if (s[i] == "-") ans = y - x;
            if (s[i] == "*") ans = x * y;
            if (s[i] == "/") ans = y / x;
            //cout << x << ' ' << y << ' ' << ans << '\n';
            st.push(ans);
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