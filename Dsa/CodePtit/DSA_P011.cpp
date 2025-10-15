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
int n, m;

bool dd[1005][1005];
char matrix[1005][1005];

pair<int, int> dirs[5] = {
    {0, 1},
    {0, -1},
    {1, 0},
    {-1, 0}};

bool check(int i, int j)
{
    if (i <= 0 || i > m || j <= 0 || j > n)
        return false;

    if (matrix[i][j] == '.')
        return false;

    if (dd[i][j])
        return false;

    return true;
}

void handle(int i, int j)
{
    dd[i][j] = true;

    for (auto dir : dirs)
    {
        int x = dir.first + i;
        int y = dir.second + j;
        if (check(x, y))
        {
            handle(x, y);
        }
    }
}

void solve()
{
    cin >> m >> n;
    FOR(1, m, i)
    {
        FOR(1, n, j)
        {
            cin >> matrix[i][j];
        }
    }

    int res = 0;
    FOR(1, m, i)
    {
        FOR(1, n, j)
        {
            if (!dd[i][j] && matrix[i][j] == '#')
            {
                res++;
                handle(i, j);
            }
        }
    }

    cout << res;
}

mainCode
{
    sp;
    solve();
}