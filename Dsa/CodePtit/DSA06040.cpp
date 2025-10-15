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
ll a[NMAX], b[NMAX], c[NMAX];
int n1, n2, n3;

void solve()
{
    vector<int> res;
    cin >> n1 >> n2 >> n3;
    FOR(1, n1, i)
    cin >> a[i];
    FOR(1, n2, i)
    cin >> b[i];
    FOR(1, n3, i)
    cin >> c[i];

    int l1, l2, l3;
    l1 = 1;
    l2 = 1;
    l3 = 1;
    while (l1 <= n1 && l2 <= n2 && l3 <= n3)
    {

        if (a[l1] == b[l2] && b[l2] == c[l3])
        {
            res.push_back(a[l1]);
            l1++;
            l2++;
            l3++;
        }
        else
        {
            ll mn = min({a[l1], b[l2], c[l3]});
            if (a[l1] == mn)
                l1++;
            if (b[l2] == mn)
                l2++;
            if (c[l3] == mn)
                l3++;
        }
    }
    if (res.size() == 0)
        cout << -1 << '\n';
    else
    {
        for (auto v : res)
        {
            cout << v << ' ';
        }
        cout << '\n';
    }
}

mainCode
{
    sp;
    int t;
    cin >> t;
    while (t--)
        solve();
}