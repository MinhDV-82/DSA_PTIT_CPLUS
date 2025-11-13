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
int k;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int j = n - 1;
    while (j >= 0 && s[j] == '0')
    {
        j--;
    }

    if (j == -1)
    {
        for (int i = max(0, j); i < n; i++)
        {
            s[i] = '1';
        }
    }
    else
    {
        for (int i = max(0, j); i < n; i++)
        {
            s[i] = '1';
        }
        s[j] = '0';
    }
    cout << s << '\n';
}

mainCode
{
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases)
    {
        cin >> t;
    }
    while (t--)
        solve();
}