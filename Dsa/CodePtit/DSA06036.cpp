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
int n, k;

void solve()
{
    cin >> n >> k;
    FOR(1, n, i)
        cin >> a[i];
    sort(a + 1, a + 1 + n);

    string res = "";
    for (int i = 1; i <= n; i++)
    {
        int l = i + 1;
        int r = n;
        ll s = k - a[i];
        while (l < r)
        {
            ll sLR = a[l] + a[r];
            if (sLR > s)
            {
                r--;
            }
            else if (sLR < s)
            {
                l++;
            }
            else
            {
                res = "YES";
                cout << res << '\n';
                return;
            }
        }
    }

    cout << "NO" << '\n';
}

mainCode
{
    sp;
    int t;
    cin >> t;
    while (t--)
        solve();
}