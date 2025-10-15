#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
vector<int>a, b;
int n, k;

void solve() {
    cin >> n >> k;
    FOR(1, n, i) {
        int x;cin >> x;
        a.push_back(x);
    };
    FOR(1, k, i) {
        int x;cin >> x;
        b.push_back(x);
    }
    sort(b.begin(), b.end());
    int res = INT_MAX;
    FOR(0, n - 1, i) {
        auto it = lower_bound(b.begin(), b.end(), abs(a[i]));
        auto it2 = it - 1;
        if (it != b.begin()) {
            res = min(res, abs(a[i] - *it2));
        }
        // cout << *it << ' ';
        res = min(res, abs(a[i] - *it));
    }

    cout << res;
}

mainCode {
    sp;
    int t;
    solve();
}