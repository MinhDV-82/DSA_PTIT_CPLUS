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
    cin >> n >> k;
    FOR(1, n, i) {
        cin >> a[i];
    }
    
    queue<int>q;
    FOR(1, k, j) {
        if (a[j] < 0) {
            q.push(j);
        }
    }

    FOR(k, n, i) {
        
        if (i != k && a[i] < 0) q.push(i);

        int x = !q.empty() ? q.front() : 0;
        
        if (i - x + 1 > k) {
            if (!q.empty()) {
                q.pop();
                x = !q.empty() ? q.front() : 0;
            }
        }

        cout << a[x] << ' ';
    }
 
}

mainCode {
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}