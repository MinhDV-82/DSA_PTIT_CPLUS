#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void solve()
{
    cin >> n;
    FOR(1, n, i) cin >> a[i];
    FOR(1, n, i)
    {
        bool b = false;
        FOR(1, n - i, j)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                b = true;
            }
        }
        if (!b)
            break;
        cout << "Buoc " << i << ": ";
        FOR(1, n, k)
            cout << a[k] << ' ';
        cout << '\n';
    }
}

mainCode
{
    sp;
    bool ok = false;
    int t = 1;
    if (ok)
    {
        cin >> t;
    }
    while (t--)
        solve();
}