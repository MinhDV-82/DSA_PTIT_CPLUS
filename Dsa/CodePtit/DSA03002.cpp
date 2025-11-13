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

void reverseNum(ll &x)
{
    ll s = 0;
    while (x > 0)
    {
        s = s * 10 + x % 10;
        x /= 10;
    }
    x = s;
}

ll getMin(ll x)
{
    ll s = 0;
    while (x > 0)
    {
        int tmp = x % 10;
        tmp = (tmp == 6) ? 5 : tmp;
        s = s * 10 + tmp;
        x /= 10;
    }
    reverseNum(s);
    return s;
}

ll getMax(ll x)
{
    ll s = 0;
    while (x > 0)
    {
        int tmp = x % 10;
        tmp = (tmp == 5) ? 6 : tmp;
        s = s * 10 + tmp;
        x /= 10;
    }
    reverseNum(s);
    return s;
}

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll numMin = getMin(x) + getMin(y);
    ll numMax = getMax(x) + getMax(y);
    cout << numMin << ' ' << numMax;
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