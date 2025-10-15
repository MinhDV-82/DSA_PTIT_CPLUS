#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()


ll a;
bool ok (ll num,) {
    ll l = 1, r = 1e7;
    ll m;
    ll square;
    while (l <= r)
    {
        m = (l + r) >> 1;
        square = m * m;
        if (square == num) {
            return true;
        }
        else if (square > num) {
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return false;
    
}
mainCode {
    sp;
    cin >> a;
    ll squareB;
    ll squareA = a * a;
    bool res = false;
    for (ll i = 1; i <= 100005; i++) {
        squareB = i * i;
        ll squareC = (ll)(2 * squareA) - squareB;
        if (ok(squareC) && squareA != squareB && squareA  != squareC && squareB != squareC) {
            res = true;
            break
            ;
        }

    }
    if (res) {
        cout << "YES";
    }
    else cout << "NO";
}