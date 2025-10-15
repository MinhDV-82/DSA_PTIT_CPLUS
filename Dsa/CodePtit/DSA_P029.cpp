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
int a[25][];
int n;


void solve()
{
    cin >> n;
    FOR(1, n, i) {
        FOR(1, n, j) {
            cin >> a[i][j];
        }
    }

    // FOR(0, )
}

mainCode
{
    sp;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}