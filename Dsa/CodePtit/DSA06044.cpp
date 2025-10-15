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
    vector<int>le;
    vector<int>chan;
    cin >> n;

    FOR(1, n, i) {
        int x;
        cin >> x;
        if (i & 1) le.push_back(x);
        else chan.push_back(x);
    }
    sort(le.begin(), le.end());
    sort(chan.begin(), chan.end(), greater<int>());
    
    int l1 = 0, l2 = 0, r1 = le.size(), r2 = chan.size();
    while (l1 < r1 && l2 < r2)
    {
        cout << le[l1] << ' ' << chan[l2] << ' ';
        l1++;
        l2++;
    }
    while (l1 < r1) {
        cout << le[l1++];
    }
    while (l2 < r2) {
        cout << chan[l2++];
    }
}

mainCode {
    sp;
    bool ok = false;
    int t = 1;
    if (ok) {
        cin >> t;
    }
    while(t--)
        solve();
}