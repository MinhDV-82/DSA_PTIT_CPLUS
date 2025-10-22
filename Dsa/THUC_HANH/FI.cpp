#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

struct Matrix
{
    ll a[2][2];
};

Matrix mul(Matrix A, Matrix B)
{
    Matrix C;
    C.a[0][0] = (A.a[0][0] * B.a[0][0] % MOD + A.a[0][1] * B.a[1][0] % MOD) % MOD;
    C.a[0][1] = (A.a[0][0] * B.a[0][1] % MOD + A.a[0][1] * B.a[1][1] % MOD) % MOD;
    C.a[1][0] = (A.a[1][0] * B.a[0][0] % MOD + A.a[1][1] * B.a[1][0] % MOD) % MOD;
    C.a[1][1] = (A.a[1][0] * B.a[0][1] % MOD + A.a[1][1] * B.a[1][1] % MOD) % MOD;
    return C;
}

Matrix power(Matrix A, ll n)
{
    if (n == 1)
        return A;
    Matrix half = power(A, n / 2);
    Matrix res = mul(half, half);
    if (n % 2)
        res = mul(res, A);
    return res;
}

ll fib(ll n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    Matrix A = {{{1, 1}, {1, 0}}};
    Matrix R = power(A, n - 1);
    return R.a[0][0] % MOD;
}

void solve()
{
    ll n;
    cin >> n;
    cout << fib(n) << '\n';
}

mainCode
{
    sp;
    int T;
    cin >> T;
    while (T--)
        solve();
}
