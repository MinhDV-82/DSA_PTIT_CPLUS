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
int m, n;
char ma[505][505];
bool dd[505][505];

pair<int, int> p[9] = {{0, -1}, {-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}};

bool ok(int i, int j)
{
    return i >= 1 && i <= m && j >= 1 && j <= n;
}
void bfs(pair<int, int> start)
{
    queue<pair<int, int>> q;
    q.push(start);

    while (!q.empty())
    {
        auto pos = q.front();
        q.pop();
        dd[pos.first][pos.second] = true;

        for (auto x : p)
        {
            int nX = pos.first + x.first;
            int nY = pos.second + x.second;
            if (ok(nX, nY) && ma[nX][nY] == 'W')
            {
                if (dd[nX][nY])
                    continue;
                q.push({nX, nY});
                dd[nX][nY] = true;
            }
        }
    }
}

void solve()
{
    cin >> m >> n;
    int res = 0;
    FOR(1, m, i)
    {
        FOR(1, n, j)
        {
            cin >> ma[i][j];
            dd[i][j] = false;
        }
    }
    FOR(1, m, i)
    {
        FOR(1, n, j)
        {
            if (!dd[i][j] && ma[i][j] == 'W')
            {
                bfs({i, j});
                res++;
            }
        }
    }
    cout << res << '\n';
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