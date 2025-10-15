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

bool check(string s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            return false;
        }
    }
    return true;
}

void sinh(string s)
{
    if (s.size() == n)
    {
        if (check(s))
        {
            for (int i = 0; i < s.size(); i++)
            {
                cout << s[i];
                if (i != s.size())
                {
                    cout << ' ';
                }
            }
            cout << '\n';
        }
        return;
    }
    for (char i = '0'; i <= '1'; i++)
    {
        sinh(s + i);
    }
}

void solve()
{
    cin >> n;
    sinh("");
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