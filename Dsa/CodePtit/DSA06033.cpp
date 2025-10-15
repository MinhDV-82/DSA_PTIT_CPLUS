#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define fi first
#define se second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int n;
int const NMAX = 1e6 + 5;
int a[NMAX];
int aMin[NMAX];
int aMax[NMAX];

void solveVer1() {
    cin >> n;
    FOR(1, n, i) {
        cin >> a[i];
    }

    aMin[1] = a[1];
    aMax[n] = a[n];
    FOR(2, n, i) {
        aMin[i] = min(aMin[i - 1], a[i]);
    }
    FORR(n - 1, 1, i) {
        aMax[i] = max(aMax[i + 1], a[i]);
    }
    int r = 2;
    int res = -1;
    FOR(1, n, i) {
        while(aMin[i] < aMax[r] && r <= n) {
            res = max(res, r - i);
            r++;
        }
    }
    cout << res << '\n';
}

pair<int, int>p[NMAX];
bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    return a.fi < b.fi;
}

void solveVer2() {
    cin >> n;
    FOR(1, n, i) {
        int x;
        cin >> x;
        p[i] = {x, i};
    }
    sort(p + 1, p + 1 + n, cmp);
    int minP = p[1].se;
    int res = -1;
    FOR(2, n, i) {
        if (p[i].se > minP) {
            res = max(res, (p[i].se - minP));
        }
        minP = min(minP, p[i].se);
    }
    cout << res << '\n';
}

mainCode {
    sp;
    bool ok = true;
    int t = 1;
    if (ok) {
        cin >> t;
    }
    while(t--) {
        // solveVer1();
        solveVer2();
    }
}