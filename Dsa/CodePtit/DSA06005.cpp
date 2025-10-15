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
int b[NMAX];
int n, k;


void solve() {
    cin >> n >> k;
    FOR (1, n, i) cin >> a[i];
    FOR (1, k, i) cin >> b[i];
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + k);

    int l1 = 1, l2 = 1;
    vector<int>h;
    vector<int>g;
    while (l1 <= n && l2 <= k) {
        if (a[l1] == b[l2]) {
            g.push_back(a[l1]);
            h.push_back(a[l1]);
            l1++;
            l2++;
        }
        else if (a[l1] < b[l2]) {
            h.push_back(a[l1]);
            l1++;
        }
        else {
            h.push_back(b[l2]);
            l2++;
        }
    }
    
    while (l1 <= n) {
        h.push_back(a[l1]);
        l1++;
    }

    while (l2 <= k)
    {
        h.push_back(b[l2]);
        l2++;
    }
    

    for (auto x : h) cout << x << ' ';
    cout << '\n';
    for (auto x : g) cout << x << ' ';
    cout << '\n';
}

mainCode {
    sp;
    int t;
    cin >> t;
    while(t--)
    solve();
}