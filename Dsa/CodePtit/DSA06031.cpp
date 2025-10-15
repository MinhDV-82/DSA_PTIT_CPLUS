#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void solve() {
    multiset<int>mts;
    mts.clear();

    cin >> n >> k;
    FOR(1, n, i) cin >> a[i];
    FOR(1, k, i) mts.insert(a[i]);
    auto it = mts.end();
    it--;
    cout << *it << ' ';
    FOR(k + 1, n, i) {
        mts.erase(mts.find(a[i - k]));
        mts.insert(a[i]);
        auto it = mts.end();
        it--;
        cout << *it << ' ';
    }
    cout << '\n';
}

mainCode {
    sp;
    bool ok = true;
    int t = 1;
    if (ok) {
        cin >> t;
    }
    while(t--)
    solve();
}