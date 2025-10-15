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

bool nt[1000005];

void snt()
{
    FOR(1, NMAX, i) nt[i] = true;
    nt[0] = false;
    nt[1] = false;

    for (ll i = 2; i * i <= NMAX; i++)
    {
        if (nt[i])
        {
            for (ll j = i * i; j <= NMAX; j += i)
            {
                nt[j] = false;
            }
        }
    }


}

void solve()
{
    snt();
    cin >> n;
    int s;
    while(n--) {
        cin >> s;
        bool ok = false;
        FOR(1, s, i) {
            if (nt[i] && nt[s - i]) {
                cout << i << " " << s - i << '\n';
                ok = true;
                break;
            }
        }
        if (!ok) {
            cout << -1 << '\n';
        }
    }
}

mainCode
{
    sp;
    solve();
}