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

int n, k;

void pre() {
    
}
ll a[1000005];

void solve() {
    cin >> n;

    FOR(1, n, i) cin >> a[i];

    ll l = 1, r = n;
    ll a1 = 0 , a2 = 0;
    bool ty = true;

    while(l <= r) {
        int maxV = max(a[l], a[r]);
        if (maxV == a[l]) l++;
        else if (maxV == a[r]) r--;

        if (ty) a1 += maxV;
        else a2 += maxV;

        ty = !ty;
    }   
    cout << a1 <<' '<< a2;
}

mainCode {
    sp;
        solve();
}