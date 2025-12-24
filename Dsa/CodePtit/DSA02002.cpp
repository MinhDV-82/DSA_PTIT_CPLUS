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
    cin >> n; queue<int>q;

    FOR(1, n, i) {
        cin >> a[i];
        q.push(a[i]);
    }
    stack<vector<int>>st;
    while(q.size() > 1) {
        int nq = q.size();
        vector<int>tmp;
        for (int i = 1; i <= nq; i++) {
            if (i == nq) {
                tmp.push_back(q.front());
                q.pop();
                continue;
            }
            int x = q.front();
            q.pop();
            int y = q.front();

            tmp.push_back(x);
            q.push(x + y);
      
        }
        st.push(tmp);
    }
    st.push({q.front()});
    
    while(!st.empty()) {
        cout << '[';
        vector<int>ans = st.top();
        st.pop();
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i];
            if (i != ans.size() - 1) {
                cout << ' ';
            }
        }
        cout << "] ";
    }
    cout << '\n';
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