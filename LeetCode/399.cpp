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

struct dataCustom
{
    string g;
    double value;
};

unordered_map<string, vector<dataCustom>> mp;
unordered_map<string, bool> visited;

class Solution
{
public:
    void dfs(string cur, string target, double tmp, double &cal)
    {

        if (mp[cur].size() == 0)
        {
            return;
        }

        if (cur == target)
        {
            cal = tmp;
            return;
        }

        visited[cur] = true;
        for (auto s : mp[cur])
        {
            double value = s.value;
            string g = s.g;
            if (!visited[g])
            {
                dfs(g, target, tmp * value, cal);
            }
        }
    }

    vector<double> calcEquation(vector<vector<string>> &equations, vector<double> &values, vector<vector<string>> &queries)
    {
        vector<double> ans;
        mp.clear();
        visited.clear();

        for (int i = 0; i < equations.size(); i++)
        {
            vector<string> s = equations[i];
            string c1 = s[0];
            string c2 = s[1];
            mp[c1].push_back({c2, values[i]});
            mp[c2].push_back({c1, (double) 1.0 / values[i]});
        }

     

        for (auto q : queries)
        {

            double cal = -1.0;
            string cur = q[0];
            string target = q[1];
            dfs(cur, target, 1.0, cal);

            for (auto &kv : visited)
            {
                kv.second = false;
            }

            ans.push_back(cal);
        }

        return ans;
    }
};

mainCode
{
    sp;
    Solution sol;
    vector<vector<string>> equations = {
        {"a", "b"},
        {"b", "c"},
        {"bc", "cd"}
    };
    vector<double> values = {
        1.5,
        2.5,
        5.0
    };
    vector<vector<string>> queries = {
        {"a", "c"},
        {"c", "b"},
        {"bc", "cd"},
        {"a", "a"},
        {"x", "x"}
    };

    vector<double> ans = sol.calcEquation(equations, values, queries);
    for (auto d : ans)
    {
        cout << d << ' ';
    }
}