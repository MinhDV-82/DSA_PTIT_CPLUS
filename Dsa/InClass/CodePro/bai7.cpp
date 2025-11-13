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

    int solution(vector<vector<int>>v, int n)
    {
        int res = 0;
        for (auto x : v) {
        int v1 = x[0];
        int v2 = x[1];
        res = max(res, gcd(v1, v2));
        }
        return res;
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
        cin >> n;
        vector<vector<int>>v;
        FOR(0, n - 1, i) {
            int x1, x2;
            cin >> x1 >> x2;
            v.push_back({x1, x2});
        }
        cout << solution(v, n);
    }
}