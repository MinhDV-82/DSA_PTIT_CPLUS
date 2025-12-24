
#include <bits/stdc++.h>

using namespace std;


bool vis[505][505];

bool isValid(int x, int y, int n, int m)
{
    return x >= 0 && x <= n && y >= 0 && y <= m;
}

int rotAllApple(int n, int m, std::vector<std::vector<int>> positions)
{
    pair<int, int> dirs[4] = {
        {0, -1},
        {-1, 0},
        {1, 0},
        {0, 1},
    };

    queue<pair<int, int>> q;

    int res = 0;
    for (auto x : positions)
    {
        int u = x[0];
        int v = x[1];
        q.push({u, v});
    }

    while (!q.empty())
    {
        int n = q.size();
        for (int i = 1; i <= n; i++)
        {
            auto p = q.front();
            q.pop();
            for (auto dir : dirs)
            {
                int nx = p.first + dir.first;
                int ny = p.second + dir.second;
                if (isValid(nx, ny, n, m) && !vis[nx][ny]) {
                    vis[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
        res++;
    }
    return res;
}