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

vector<int> g[100005];
bool check[55][55];

void solve()
{
    cin >> n;
    cin.ignore();
    FOR(1, n, i)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string w;
        while (ss >> w)
        {
            int num = stoi(w);
            g[i].push_back(num);
            check[i][num] = true;
            check[num][i] = true;
        }
    }
    FOR(1, n, i)
    {
        sort(g[i].begin(), g[i].end());
        for (auto x : g[i])
        {
            if (check[i][x]) {
                cout << i << ' ' << x << '\n';
                check[i][x] = false;
                check[x][i] = false;
            }
          
        }
    }
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