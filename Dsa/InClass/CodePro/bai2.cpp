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

bool vis[15][15];
pair<int, int> dirs[4] = {
    {1, 0},
    {-1, 0},
    {0, 1},
    {0, -1}};

bool isValid(int x, int y, int n)
{
    return x >= 0 && x < n && y >= 0 && y < n;
}

void dfs(int x, int y, pair<int, int> p, int cnt, int dictance, int n)
{

    if (cnt >= dictance)
        return;

    int nX = x + p.first;
    int nY = y + p.second;
    vis[nX][nY] = true;
    dfs(nX, nY, p, cnt + 1, dictance, n);
};

void solution(int n, int m, vector<vector<int>> watering_can)
{
    for (int i = 0; i < watering_can.size(); i++)
    {
        int x = watering_can[i][0];
        int y = watering_can[i][1];
        int dictance = watering_can[i][2];

        vis[x][y] = true;
        for (auto dir : dirs)
        {
            dfs(x, y, dir, 0, dictance, n);
        }
    }

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!vis[i][j])
                res++;
        }
    }
    cout << res;
}

mainCode
{
    sp;
    vector<vector<int>> watering_can;
    int m;
    cin >> n >> m;
    FOR(1, m, i)
    {
        int x;
        vector<int> tmp;
        FOR(1, 3, j)
        {
            cin >> x;
            tmp.push_back(x);
        }
        watering_can.push_back(tmp);
    }

    solution(n, m, watering_can);
}