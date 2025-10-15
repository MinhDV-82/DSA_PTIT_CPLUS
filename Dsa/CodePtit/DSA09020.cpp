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
bool m[1005][1005];


void solve() {
    
    cin >> n;
    cin.ignore();
    FOR(1, n, i) {
        string s;

        getline(cin, s);
        string w;
        stringstream ss(s);
        while(ss >> w) {
            int num = stoi(w);
            m[i][num] = true;
            m[num][i] = true;
        }
    }
    FOR(1, n, i) {
        FOR(1, n, j) {
            cout << m[i][j] << ' ';
        }
        cout << '\n';
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