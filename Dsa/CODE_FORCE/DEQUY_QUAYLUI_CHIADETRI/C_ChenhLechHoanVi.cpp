#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define fi first
#define se second
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

bool dd[1005];
int x[10005];

bool ok()
{
    int res = 0;
    FOR(1, n - 1, i)
    {
        res = res + x[i] - x[i + 1];
    }
    return res > 0;
}

void sinh(int j)
{
    if (j > n)
    {
        if (ok())
        {
            FOR(1, n, i)
            {
                cout << x[i] << ' ';
            }
            cout << '\n';
        }
        return;
    }
    FOR(1, n, i)
    {
        if (dd[i])
            continue;
        dd[i] = true;
        x[j] = i;
        sinh(j + 1);
        dd[i] = false;
    }
}

void solve()
{
    cin >> n;
    sinh(1);
}

mainCode
{
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases)
    {
        cin >> t;
    }
    while (t--)
        solve();
}