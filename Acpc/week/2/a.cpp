#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int mp[10000];

void solve() {
    int k, s;
    cin >> k >> s;
    FOR(0, k, i) {
        FOR(0, k, j) {
            mp[i + j]++;
        }
    }

    int res = 0;
    FOR(0, k, i) {
        int sum = s - i;
        if (sum >= 0 && mp[sum] != 0) {
            res += mp[sum];
        }
    }
    
    cout << res;
}

mainCode {
    sp;
    solve();
}