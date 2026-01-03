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
    cin >> n;
    FOR(1, n, i) cin >> a[i];
    stack<int>st;
    //st.push(1);
    vector<int>ans(n + 4, 1);
    FOR(1, n, i) {
        while(!st.empty() && a[i] >= a[st.top()]) {
            st.pop();
        }
        if (st.empty()) {
            ans[i] = i;
        }
        else {
            ans[i] = i - st.top();
        }
        st.push(i);
    }
    FOR(1, n, i) cout << ans[i] << ' ';
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