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

int n, m;
vector<vector<int>> g;
int res[200005];
bool visited[200005];

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    res[start] += 2;
    visited[start] = true;

    int level = 0;

    while (!q.empty())
    {
        int n = q.size();
        level++;
        for (int i = 0; i < n; i++)
        {
            int index = q.front();
            q.pop();   
            for (auto x : g[index])
            {
                if (visited[x]) continue;

                if (level % 2 == 1)
                {
                    res[x] += 1;
                }
                else
                {
                    // cout << "hehe";
                    res[x] += 2;
                }
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

mainCode
{
    sp;
    cin >> n >> m;
    g.resize(n + 1);
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);

    }

    for (int i = 1; i <= n; i++)
    {
        bfs(i);
    }

    for (int i = 1; i <= n; i++)
    {
        if (res[i] == 0) {
            res[i] = 1;
        }

        if (res[i] != 1 && res[i] != 2 ) {
            cout << "IMPOSSIBLE";
            return 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << res[i] << " ";
    }
}