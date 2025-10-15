#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k, t;

void solve()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        FOR(1, n, i) cin >> a[i];

        int res = INT_MAX;
        FOR(1, n, i) {
            FOR(i + 1, n, j) {
                if (abs(a[i] + a[j]) < abs(res)) {
                    res = a[i] + a[j];
                }
            }
        }
        cout << res <<'\n';
    }
}

mainCode
{
    sp;
    solve();
}