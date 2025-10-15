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

class Solution
{
private:
    vector<vector<pair<int, int>>> g;
    vector<bool> visited;
    int res = 0;

public:
    void dfs(int node, vector<vector<pair<int, int>>> &g)
    {

        if (visited[node])
            return;
        visited[node] = true;
        
        for (auto &x : g[node])
        {
            if (!visited[x.first])
            {
                if (x.second == 1)
                {
                    res++;
                }

                dfs(x.first, g);
            }
        }
    }
    int minReorder(int n, vector<vector<int>> &connections)
    {
        g.clear();
        visited.clear();
        res = 0;
        g.resize(n);
        visited.resize(n);

        for (auto x : connections)
        {
            int n1 = x[0];
            int n2 = x[1];
            g[n1].push_back({n2, 1});
            g[n2].push_back({n1, -1});
        }

        dfs(0, g);

        return res;
    }
};
mainCode
{
    sp;
    int n = 6;
    vector<vector<int>> connections = {
        {0, 1},
        {1, 3},
        {2, 3},
        {4, 0},
        {4, 5}};
    Solution sol;
    cout << sol.minReorder(n, connections);
    
}