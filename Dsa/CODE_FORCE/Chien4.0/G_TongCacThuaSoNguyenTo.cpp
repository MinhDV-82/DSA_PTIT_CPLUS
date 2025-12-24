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
int n, k;

vector<int> nt(200005, 0);
vector<ll>dp(200005, 0);

void pre()
{
    for (ll i = 2; i * i <= 100005; i++)
    {
        if (nt[i] == 0)
        {
            for (ll j = i; j <= 100005; j += i)
            {
                nt[j] = max((ll)nt[j], i);
            }
        }
    }
    FOR(1, 100005, i) {
        if (nt[i] == 0) {
            nt[i] = i;
        }
    }

    FOR(2, 100004, i) {
        dp[i] = dp[i - 1] + nt[i];
    }
}

void solve()
{
    cin >> n >> k;
    cout << dp[k] - dp[n - 1] << '\n';
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