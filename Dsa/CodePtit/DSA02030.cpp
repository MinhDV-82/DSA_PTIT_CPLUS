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
char c;
map<string, bool>mp;
void dq(string res)
{
    if (res.size() == k)
    {
        string tmp = res;
        sort(res.begin(), res.end());
        if (!mp[res])  {
            mp[res] = true;
            cout << tmp << '\n';
        }
        return;
    }

    for (char x = 'A'; x <= c; x++)
    {
        dq(res + x);
    }
}

void solve()
{
    cin >> c >> k;
    dq("");
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