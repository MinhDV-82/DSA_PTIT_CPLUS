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

ll n, k;

void pre() {
    
}

string bfs() {
    queue<pair<string, int>>q;
    q.push({"1", 1 % n});
    vector<bool> visited(n + 5, false);

    while(!q.empty()) {
        auto x = q.front();
        q.pop();

        int rem = x.second;

        if (rem == 0) {
            return x.first;
        }

        int nrem1 = (rem * 10) % n;
        if (!visited[nrem1]) {
            visited[nrem1] = true;
            q.push({x.first + "0", nrem1});
        }
        int nrem2 = (rem * 10 + 1) % n;
        if (!visited[nrem2]) {
            visited[nrem2] = true;
            q.push({x.first + "1", nrem2});
        }
    }
    return "";
}

void solve() {
    cin >> n;
    cout << bfs();
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