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

void bfs() {
    queue<string>q;
    q.push("6");
    q.push("8");
    int level = 1;
    stack<string>st;
    while(level <= n) {
        int s = q.size();
        FOR(1, s, i) {
            string x = q.front();
            q.pop();
            st.push(x);
            q.push(x + '6');
            q.push(x + '8');
        }
        level++;
    }
    while(!st.empty()) {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << '\n';
}

void solve() {
    cin >> n;
    bfs();
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