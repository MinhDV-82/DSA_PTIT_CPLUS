#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long

#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void solve() {
    cin >> n;
    queue<int>q;
    while(n--) {
        int x;
        cin >> x;
        switch (x)
        {
            case 1:
                cout << q.size() << '\n';
                break;
            case 2:
                if (q.empty()) {
                    cout << "YES";
                }
                else {
                    cout << "NO";
                }
                cout << '\n';
                break;
            case 3:
                int y;
                cin >> y;
                q.push(y);
                break;
            case 4:
            if (!q.empty())
                q.pop();
                break;
            case 5:
                if (q.empty()) {
                    cout << -1 << '\n';
                }
                else {
                    cout << q.front() << '\n';
                }
                break;
            case 6:
                if (q.empty()) {
                    cout << -1 << '\n';
                }
                else {
                    cout << q.back() << '\n';
                }
                break;

            default:
                break;
        }
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