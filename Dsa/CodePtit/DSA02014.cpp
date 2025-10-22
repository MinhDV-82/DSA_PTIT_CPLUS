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
int n, k, r, c;
char cs[100][100];

pair<int, int> dirs[8] = {
    {0, 1},
    {0, -1},
    {1, 0},
    {-1, 0},
    {-1, -1},
    {-1, 1},
    {1, 1},
    {1, -1}};

map<string, bool> mp;
vector<string> res;

bool vis[100][100];

bool isValid(int x, int y)
{
    return x >= 1 && x <= r && y >= 1 && y <= c;
}

void dfs(int x, int y, string tmp)
{

    if (mp[tmp])
    {
        res.push_back(tmp);
    }

    for (auto dir : dirs)
    {
        int newX = x + dir.first;
        int newY = y + dir.second;
        if (isValid(newX, newY) && !vis[newX][newY])
        {
            vis[newX][newY] = true;
            dfs(newX, newY, tmp + cs[newX][newY]);
            vis[newX][newY] = false;
        }
    }
}

void solve()
{
    res.clear();
    mp.clear();

    cin >> n >> r >> c;

    FOR(1, n, i)
    {
        string s;
        cin >> s;
        mp[s] = true;
    }

    FOR(1, 10, i)
    FOR(1, 10, j) vis[i][j] = false;

    FOR(1, r, i)
    {
        FOR(1, c, j)
        {
            cin >> cs[i][j];
        }
    }

    FOR(1, r, i)
    {
        FOR(1, c, j)
        {
            vis[i][j] = true;
            string tmp = string(1, cs[i][j]);
            dfs(i, j, tmp);
            vis[i][j] = false;
        }
    }

    if (res.size() == 0)
    {
        cout << -1;
    }
    else
    {
        bool first = true;
        for (auto it : res)
        {
            cout << it << ' ';
        }
    }

    cout << '\n';
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