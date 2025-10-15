#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e5 + 5;
int a[NMAX], b[NMAX];
int n, k;

void solve() {
    vector<int>res;
    vector<int>inter;
    res.clear();
    cin >> n >> k;
    FOR(1, n, i) cin >> a[i];
    FOR(1, k, i) cin >> b[i];

    int l1 = 1;
    int l2 = 1;
    while(l1 <= n && l2 <= k) {
        if (a[l1] == b[l2]) {
            res.push_back(a[l1]);
            inter.push_back(a[l1]);
            l1++;
            l2++;
        }
        else if (a[l1] < b[l2]) {
            res.push_back(a[l1]);
            l1++;
        }  
        else {
            res.push_back(b[l2]);
            l2++;
        }
    }
    
    while(l1 <= n) {
        res.push_back(a[l1]);
        l1++;
    }

    while(l2 <= k) {
        res.push_back(b[l2]);
        l2++;
    }

    for (auto x : res) {
        cout << x << ' ';
    }
    cout << '\n';
    for (auto x : inter) {
        cout << x << ' ';
    }
    cout << '\n';
}


mainCode {
    sp;
    int t;
    cin >> t;
    while(t--)
    solve();
}