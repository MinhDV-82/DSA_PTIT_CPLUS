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
     
    while(q.size() > 1) {
        int nq = q.size();
        cout << '[';
        for (int i = 1; i <= nq; i++) {
            if (i == nq) {
                cout << q.front() << ']';
                q.pop();
                continue;
            }
            int x = q.front();
            q.pop();
            int y = q.front();

            q.push(x + y);
            cout << x << ' ';
        }
        cout << '\n';
    }
    cout << '[' << q.front() << "]\n";
   

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