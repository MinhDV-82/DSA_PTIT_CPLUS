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

int t;

int m[9][9];
bool dd[9][9];
ll res = 0;

bool check(int x, int y)
{
    for (int i = x - 1, j = y - 1; i >= 1 && j >= 1; i--, j--)
    {
        if (dd[i][j])
            return false;
    }
    for (int i = x - 1, j = y + 1; i >= 1 && j <= 8; i--, j++)
    {
        if (dd[i][j])
            return false;
    }
    for (int i = x - 1; i >= 1; i--)
    {
        if (dd[i][y])
            return false;
    }
    return true;
}

void cal()
{
    ll s = 0;
    FOR(1, 8, i)
    {
        FOR(1, 8, j)
        {
            if (dd[i][j]) {
                s += m[i][j];
                res = max(res, s);
            }
        }
    }
}

void sol(int i)
{
    if (i > 8)
    {
        cal();
        return;
    }

    for (int j = 1; j <= 8; j++)
    {
        if (check(i, j) && !dd[i][j])
        {
            dd[i][j] = true;
            sol(i + 1);
            dd[i][j] = false;
        }
    }
}

void solve(int index)
{
    res = 0;

    FOR(1, 8, i)
    {
        FOR(1, 8, j)
        {
            cin >> m[i][j];
            dd[i][j] = false;
        }
    }

    sol(1);
    cout << "Test " << index << ": " << res <<'\n';
}

mainCode
{
    sp;
    cin >> t;
    FOR(1, t, i) {
        solve(i);
    }

}