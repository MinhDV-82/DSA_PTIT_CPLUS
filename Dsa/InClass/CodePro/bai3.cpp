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



mainCode
{
    sp;
    vector<vector<int>> colors;
    int m, c;
    cin >> n >> m >> c;
    FOR(1, m, i)
    {
        int x;
        vector<int> tmp;
        FOR(1, 5, j)
        {
            cin >> x;
            tmp.push_back(x);
        }
        colors.push_back(tmp);
    }

    solution(n, m, c, colors);
}