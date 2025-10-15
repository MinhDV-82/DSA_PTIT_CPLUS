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

void merge(int a[], int b[], int r1, int r2) {
    vector<int>tmp;
    int l1 = 1;
    int l2 = 1;
    while(l1 <= r1 && l2 <= r2) {
        if (a[l1] < b[l2]) {
            tmp.push_back(a[l1]);
            l1++;
        }
        else  {
            tmp.push_back(b[l2]);
            l2++;
        }
    }
    while(l1 <= r1) {
        tmp.push_back(a[l1]);
        l1++;
    }
    while (l2 <= r2)
    {
        tmp.push_back(b[l2]);
        l2++;
    }
    for (auto x : tmp) {
        cout << x << ' ';
    }
    cout << '\n';
}

void solve() {
    cin >> n >> k;
    FOR(1, n, i) cin >> a[i];
    FOR(1, k, i) cin >> b[i];
    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + k);
    merge(a, b, n, k);
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