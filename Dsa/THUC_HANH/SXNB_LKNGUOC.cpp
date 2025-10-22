#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void solve() {
    cin >> n;
    FOR(1, n, i) cin >> a[i];
    vector<string>res;
    for (int i = 1; i <= n; i++) {
        string tmp = "";
        bool ok = false;
        for (int j = 1; j <= n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                ok = true;
            }
        }

        
        if (ok) {
            FOR(1, n, j) {
                tmp += to_string(a[j]);
                if (j != n) tmp += ' ';
            }
            res.push_back(tmp);
        }
        else {
            break;
        }
    }

    FORR(res.size() - 1, 0, i) {
        cout << "Buoc " << (i + 1) << ": " << res[i];
        if (i != 0) cout << '\n';
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