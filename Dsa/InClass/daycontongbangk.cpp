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

vector<vector<int>> res;

void sinh(string s, int k)
{
    if (s.size() == n)
    {
        vector<int> v;
        ll sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                sum = sum + a[i];
                v.push_back(a[i]);
            }
        }
        if (sum == k)
        {
            res.push_back(v);
        }

        return;
    }
    for (char c = '0'; c <= '1'; c++)
    {
        sinh(s + c, k);
    }
}

void solve()
{
    cin >> n >> k;
    res.clear();
    FOR(0, n - 1, i)
        cin >> a[i];
    sort(a, a + n);

    sinh("", k);
    sort(res.begin(), res.end());

    for (int i = 0; i < res.size(); i++) {
            cout << "[";
            FOR(0, res[i].size() - 1, j) {
                cout << res[i][j];
                if (j != res[i].size() - 1) cout << ' ';
            }
            cout << "] ";
    }
    if (res.size() == 0) cout << -1;
    cout << '\n';
}

mainCode
{
    sp;
    bool ok = true;
    int t = 1;
    if (ok)
    {
        cin >> t;
    }
    while (t--)
        solve();
}