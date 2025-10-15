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
int a[NMAX];
int n, k;
bool dd[15];
int x[15];

int d;

void ans()
{
    d++;
    cout << d << ": ";
    FOR(0, n - 1, i)
    {
        cout << x[i] << ' ';
    }
    cout << '\n';
}

void hoanvi(int j, int n)
{
    if (j == n) {
        ans();
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!dd[i]) {
            x[j] = i;
            dd[i] = true;
            if (j < n) hoanvi(j + 1, n);
            dd[i] = false;
        }
    }
}

void solve()
{
    cin >> n;
    hoanvi(0, n);
}

mainCode
{
    sp;
    solve();
}