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
ll n, k, s;

ll dp[1 >> 21];

void solve() {
    while(cin >> n >> k >> s) {
        if (n == 0 && k == 0 && s == 0) break;

        ll res = 0;
        for (int i = 1; i <= (1 << n); i++) {
            int cnt_1 = 0;
            int tmp = 0;
            for (int j = 0; j < n; j++) {
                if ( (1 << j) & i) {
                    cnt_1++;
                    tmp += (j + 1);
                }
            }
            if (cnt_1 == k && tmp == s) {
                res++;
            }
        }
        cout << res << '\n';
    }
}

mainCode {
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    while(t--)
        solve();
}