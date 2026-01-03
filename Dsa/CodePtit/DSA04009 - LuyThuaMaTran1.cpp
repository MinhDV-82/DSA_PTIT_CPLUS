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
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

ll mod = 1e9 + 7;

void pre() {
    
}

struct matrix {
    int m[11][11];
    matrix() {
        FOR(0, 10, i) FOR(0, 10, j) m[i][j] = 0;
    }
};

matrix mul(matrix a, matrix b) {
    matrix c;
    FOR(0, n - 1, i) {
        FOR(0, n - 1, j) {
            FOR(0, n - 1, k) {
                c.m[i][j] = c.m[i][j] % mod + (a.m[i][k] % mod * b.m[k][j]) % mod;
                c.m[i][j] %= mod;
            }
        }
    }
    return c;
}

matrix power(matrix a, ll k) {
    matrix c;
    FOR(0, n - 1, i) c.m[i][i] = 1;
    while(k > 0) {
        if (k & 1) c = mul(c, a);
        a = mul(a, a);
        k /= 2;
    }
    return c;
}


void solve() {
    cin >> n >> k;
    matrix ma;

    FOR(0, n - 1, i) FOR(0, n - 1, j) cin >> ma.m[i][j];

    matrix res = power(ma, k);
     FOR(0, n - 1, i) {
        FOR(0, n - 1, j) {
        cout << res.m[i][j] << ' ';
     }
     cout << '\n';
    }
    cout << '\n';
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}