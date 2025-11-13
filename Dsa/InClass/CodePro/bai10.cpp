#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define ll long long
#define sp ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mainCode int main()

int const INF = 1e9;

int solution(const vector<vector<int>>& cost)
{
    int n = cost.size();
    vector<vector<int>> dp(1 << n, vector<int>(n, INF));

    dp[1][0] = 0;

    for (int mask = 1; mask < (1 << n); mask++)
    {
        for (int i = 0; i < n; i++)
        {
            if (!(mask & (1 << i))) continue;
            if (dp[mask][i] == INF) continue;

            for (int j = 0; j < n; j++)
            {
                if (mask & (1 << j)) continue;
                int new_mask = mask | (1 << j);
                dp[new_mask][j] = min(dp[new_mask][j], dp[mask][i] + cost[i][j]);
            }
        }
    }

    int full_mask = (1 << n) - 1;
    int result = INF;
    for (int i = 1; i < n; i++)
    {
        result = min(result, dp[full_mask][i] + cost[i][0]);
    }

    return result;
}

mainCode
{
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases)
    {
        cin >> t;
    }
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> cost(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> cost[i][j];
            }
        }

        cout << solution(cost) << "\n";
    }
}
