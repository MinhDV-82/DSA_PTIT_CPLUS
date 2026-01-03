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
ll n, k;

void pre()
{
}

ll bfs()
{
    queue<ll> q;
    q.push((ll)1);
    ll cnt = 0;

    while (!q.empty())
    {
        ll x = q.front();
        q.pop();
        cnt++;

        ll u = x * 10 + 1;
        ll v = x * 10;
        if (u <= n)
            q.push(u);
        if (v <= n)
            q.push(v);
    }
    return cnt;
}

void solve()
{
    cin >> n;
    cout << bfs() << '\n';
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