/* =============== */
//! solution by : MinhDV-82
/* =============== */
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
int n, k;

bool dd[10005];
map<int, int> dp;

void pre()
{
    int i = 1;
    while (i * i <= 2005)
    {
        dd[i * i] = true;
        i++;
    }
}

int bfs(int &n)
{
    queue<int> q;
    q.push(n);
    int cnt = 0;
    vector<bool> vis(4005, false);

    while (!q.empty())
    {
        int size = q.size();
        FOR(1, size, i)
        {
            int x = q.front();
            q.pop();
            if (!vis[x + 2000])
            {
                vis[x + 2000] = true;

                if (x == 0)
                    return cnt;

                if (x + 1 <= 2000) q.push(x + 1);
                if (x - 1 >= -2000) q.push(x - 1);
                q.push(x * -1);
                if (x % 2 == 0)
                    q.push(x / 2);
                if (x > 0 && dd[x])
                    q.push(int(sqrt(x)));
            }
        }
        cnt++;
    }
    return cnt;
}

void solve()
{
    cin >> n;
    if (dp[n] == 0)
        dp[n] = bfs(n);
    cout << dp[n] << '\n';
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
    pre();

    while (t--)
        solve();
}