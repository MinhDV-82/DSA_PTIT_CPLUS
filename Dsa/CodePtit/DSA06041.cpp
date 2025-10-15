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
int dd[NMAX];

void solve() {
    FOR(1, 1e6, i) dd[i] = false;
    cin >> n;
    FOR (1, n, i) {
        cin >> a[i];
        dd[a[i]]++;
    }
    int cntN =  n / 2;

    bool cnt = false;
    FOR (1, n, i) {
        if (dd[a[i]] > cntN) {
            cout << a[i];
            cnt = true;
            break;
        }
    }
    
    if (!cnt) {
        cout << "NO";
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