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

bool ok(string s)
{
    int cnt = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            if (cnt == k)
            {
                return true;
            }
            cnt = 1;
            continue;
        }
        if (s[i] == s[i - 1])
            cnt++;
    }
    if (cnt == k) return true;
    return false;
}

vector<string>res;
void sol(string s = "")
{
    if (s.size() == n)
    {
        if (ok(s))
        {
            res.push_back(s);
        }
        return;
    }
    for (char c = 'A'; c <= 'B'; c++)
    {
        sol(s + c);
    }
}

void solve()
{
    cin >> n >> k;
    sol();
    cout << res.size() << '\n';
    for (auto x : res) {
        cout << x << '\n';
    }
}

mainCode
{
    sp;
    int t;
    solve();
}