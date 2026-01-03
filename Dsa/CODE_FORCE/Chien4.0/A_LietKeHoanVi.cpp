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

int x[105];
bool dd[105];

bool ok() {
    int ans = 0;
    FOR(1, n - 1, i) {
        ans += a[i] - a[i + 1];
    }
    return ans > 0;
}
 
void sinh(int j) {
    if (j > n) {
        if (ok()) {
            FOR(1, n, i) cout << a[i] << ' ';
            cout << '\n';
        } 
        return;
    }
    FOR(1, n, i) {
        if (!dd[i]) {
            dd[i] = true;
            a[j] = i;
            sinh(j + 1);
            dd[i] = false;
        }
    }
}


void solve() {
    cin >> n;
    sinh(1);
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