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
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void pre()
{
}

void solve()
{
    cin >> n;
    stack<int> st;
    vector<int> ans(n + 5);
    FOR(1, n, i)
        cin >> a[i];

    st.push(1);
    FOR(2, n, i)
    {
        while (!st.empty() && a[st.top()] < a[i])
        {   
            ans[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }

    while(!st.empty()) {
        ans[st.top()] = -1;
        st.pop();
    }
    FOR(1, n, i) cout << ans[i] << ' ';

    cout << '\n';
}

mainCode
{
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases)
    {
        cin >> t;
    }
    pre();

    while (t--)
        solve();
}