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
int cnt[NMAX];
pair<int, int> p[NMAX];

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

void solve() {
    FOR(0, 100005, i) cnt[i] = 0;
    
    cin >> n;
    FOR(1, n, i) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    FOR(1, n, i) {
        p[i] = {a[i], cnt[a[i]]};
    }
    sort(p + 1, p + 1 + n, cmp);
    FOR(1, n, i) {
        cout << p[i].first << ' ';
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