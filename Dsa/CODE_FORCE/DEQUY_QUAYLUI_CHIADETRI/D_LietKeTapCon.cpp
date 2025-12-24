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
string a[NMAX];
int n, k;

int count1(int x) {
    int cnt = 0;
    while(x > 0) {
        if (x & 1) cnt++;
        x = x >> 1;
    }
    return cnt;
}



void solve() {
    cin >> n >> k;
    
    FOR(1, n, i) {
        cin >> a[i];
    }
    set<string>res;
    FOR(0, 1 << n, i) {

        if (count1(i) != k) continue;

        string tmp = "";
        FOR(0, n - 1, j) {
            if (i & (1 << j)) {
                tmp += a[j + 1];
              
            }
        }
        res.insert(tmp);
    }

    for (auto x : res) {
        cout << x << '\n';
    }
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