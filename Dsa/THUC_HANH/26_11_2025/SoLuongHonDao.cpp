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

int n, k;
bool dd[1005][1005];
int ma[1005][1005];

bool isValid(int x, int y)
{
    return x >= 0 && x <= n && y >= 0 && y <= k;
}

void bfs(pair<int, int> start)
{
    queue<pair<int, int>> q;
    q.push(start);
     dd[start.first][start.second] = true;
           
    while (!q.empty())
    {
        auto p = q.front();
        int x = p.first;
        int y = p.second;
        dd[x][y] = true;
        q.pop();
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                if (i == 0 && j == 0) continue;

                int nx = x + i;
                int ny = y + j;
                if (isValid(nx, ny) && !dd[nx][ny] && ma[nx][ny] == 1)
                {
                    q.push({nx, ny});
                    dd[nx][ny] = true;
                }
            }
        }
    }
}


void solve()
{
    cin >> n >> k;
    FOR(1, n, i)
    {
        FOR(1, k, j)
        {
            cin >> ma[i][j];
            dd[i][j] = false;
        }
    }
    int res = 0;
    FOR(1, n, i)
    {
        FOR(1, k, j)
        {
            if (!dd[i][j] && ma[i][j] == 1)
            {
                res++;
                bfs({i, j});
            }
        }
    }
    cout << res << '\n';
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