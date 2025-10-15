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

void solve()
{
    cin >> n;
    FOR(1, n, i) cin >> a[i];
    stack<string>res;
    FOR(1, n, i)
    {
        bool b = false;
        string tmp = "";
        FOR(1, n - i, j)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                b = true;
            }
        }
        if (!b)
            break;
        tmp = "Buoc " + to_string(i) + ": ";
        FOR(1, n, k)
            tmp += to_string(a[k]) + ' ';
        res.push(tmp);
    }

    while (!res.empty())
    {
        cout << res.top() << '\n';
        res.pop();
    }
    
}

mainCode
{
    sp;
    bool ok = true;
    int t = 1;
    if (ok)
    {
        cin >> t;
    }
    while (t--)
        solve();
}