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

int const NMAX = 1e6 + 5;

void solve(vector<vector<int>> v)
{
    int m = v.size();
    int n = v[0].size();

    int minA = INT_MAX;
    int maxA = INT_MIN;

    for (int i = 0; i < m; i++)
    {
        double sR = 0;
        double sC = 0;
        
        for (int j = 0; j < n; j++)
        {
            sR += v[j][i];
            sC += v[i][j];
        }

        int aveR = (int)(sR / (double)n);
        int aveC = (int)(sC / (double)n);

        minA = min(minA, min(aveR, aveC));
        maxA = max(maxA, max(aveR, aveC));
    }
    
    double s1 = 0;
    double s2 = 0;
    for (int i = 0, j = 0; i < m && j < n; i++, j++)
    {
        s1 += v[i][j];
        s2 += v[n - i - 1][j];
    }

    int aveS1 = (int)(s1 / (double)n);
    int aveS2 = (int)(s2 / (double)n);
    minA = min(minA, min(aveS1, aveS2));
    maxA = max(maxA, max(aveS1, aveS2));

    cout << maxA + minA;
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
        vector<vector<int>> v;
        int r, c;
        cin >> r >> c;
        FOR(0, r - 1, i)
        {
            int x;
            vector<int> tmp;
            FOR(0, c - 1, j)
            {
                cin >> x;
                tmp.push_back(x);
            }
            v.push_back(tmp);
        }
        solve(v);
    }
}