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

int solution(int a[], int n, int j)
{
    int sum = 0;
    int res = 0;
    FOR(1, n, i)
    sum += a[i];
    int v = j % sum;
    if (v == 0)
    {
        return n;
    }
    else
    {
        FOR(1, n, i)
        {
            if (a[i] >= v)
            {
                return i;
                break;
            }
            v -= a[i];
        }
    }
    return 0;
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
        int j;
        cin >> n >> j;

        FOR(1, n, i)
        cin >> a[i];
        cout << solution(a, n, j);
    }
}