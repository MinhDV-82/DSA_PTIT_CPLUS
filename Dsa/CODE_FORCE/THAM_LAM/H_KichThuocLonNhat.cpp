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

void solve() {
    cin >> n >> k;
    map<int, int>mp;
    FOR(1, n, i) {
        cin >> a[i];
        mp[a[i] % k]++;
    }
    ll res = 0;
    for (auto x : mp) {
        int value = max(mp[x.first], mp[k - x.first]);

        if (value != 0 && x.first == k - x.first) {
            value = 1;
        }

        if (value != 0 && x.first == 0) {
            value = 1;
        }

        res = res + value;
        mp[x.first] = 0;
        mp[k - x.first] = 0;
    }
    cout << res;
}

mainCode {
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    while(t--)
        solve();
}