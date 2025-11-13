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
    int sMin = INT_MAX;
    int sMax = INT_MIN;
    int n, m;
    cin >> n >> m;
    FOR(1, n, i)
        cin >> a[i];

    int s = 0;
    FOR(1, m, i) {
        s += a[i];
    }

    sMin = s;
    sMax = s;

    FOR(m + 1, n, i) {
        s = s - a[i - m] + a[i];
        sMin = min(s, sMin);
        sMax = max(s, sMax);
    }

    cout << sMax - sMin;
}

mainCode
{
    sp;
    solve();
}