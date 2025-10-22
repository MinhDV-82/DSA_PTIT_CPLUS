#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int a[50];
ll n, s;

int res = INT_MAX;
void sol(int i, ll s, int cnt) {
    if (s == 0) {
        res = min(res, cnt);
        return;
    }

    if (i > n || s <= 0 || cnt >= res) return;
    sol(i + 1, s - a[i], cnt + 1);
    sol(i + 1, s, cnt);
}

void solve() {
    cin >> n >> s;
    res = INT_MAX;
    FOR(1, n, i) cin >> a[i];
    sort(a + 1, a + 1 + n, greater<int>());
    sol(1, s, 0);
    res = res == INT_MAX ? -1 : res;
    cout << res << '\n';
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    while(t--)
        solve();
}