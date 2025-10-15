#include <bits/stdc++.h>
using namespace std;
#define FOR(s, b, i) for (int i = s; i <= b; i++)
#define FORR(b, s, i) for (int i = b; i >= s; i--)
#define ll long long
// #define s                     
//     ios_base ::sync_with_stdio(0); 
//     cin.tie(0);                    
//     cout.tie(0)
#define mainCode int main()

ll const MOD = 1e9 + 7;
ll dp[4][100006];
ll pows[100006];
ll base = 311;

int n;
string s;
ll getHash(int l, int r, int o)
{
    ll cal = (dp[o][r] - dp[o][l - 1] * pows[abs(r - l) + 1] + MOD) % MOD;
    return cal;
}

ll getHash2(int l, int r, int o) {
    ll cal = (dp[o][r] - dp[o][l + 1] * pows[abs(r - l) + 1] + MOD) % MOD;
    return cal;
}
bool ok(int pos1, int pos2, int len)
{
    if (pos2 + len > n || pos1 - len <= 0)
    {
        return false;
    }
    ll v1 = getHash(pos1 - len, pos1, 1);
    ll v2 = getHash2(pos2 + len, pos2, 2);

    // cout << v1 << ' ' << v2 << '\n';
 
    return v1 == v2;
}

void solve()
{

    int res = 1;

    cin >> n >> s;

    pows[0] = 1;
    FOR(1, n, i)
    {
        pows[i] = (pows[i - 1] % MOD * base % MOD) % MOD;
    }
    s = " " + s;
    FOR(1, n, i)
    {
        dp[1][i] = (dp[1][i - 1] * base + s[i] - 'a' + 1) % MOD;
    }
    dp[2][n + 1] = 0;
    FORR(n, 1, i) {
        dp[2][i] = (dp[2][i + 1] * base + s[i] - 'a' + 1) % MOD;
    }

  
    FOR(2, n, i) {
        int l = 0, r = i;
        int m = 1;
        int tmp = 0;
        // cout << " init l r" << l << ' ' << r << '\n';
        while(l <= r) {
            m = (l + r) >> 1;
            if (ok(i, i, m)) {
                l = m + 1;
                tmp = m;
            }
            else {
                r = m - 1;
            }
              res = max(res, 1 + tmp * 2);
        }


        l = 0, r = i, m = 0, tmp = 0;
        if (s[i - 1] == s[i]) {

            while(l <= r) {
                m = (l + r) >> 1;
                if (ok(i - 1, i, m)) {
                    l = m + 1;
                    tmp = m;
                }
                else {
                    r = m - 1;
                }
            }
             res = max(res, tmp * 2 + 2);
        }
        
    }

    cout << res;
}

mainCode
{
    // sp;
    solve();
}