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
int n, k, m;

void solve() {
    cin >> n >> k >> m;
    int slt = k * m;
    int res = -1;
    
    int minDay = slt / n;
    if (slt % n != 0) minDay++;

    int dayNotBuy = k / 7;
    int dayCanBuy = k - dayNotBuy;

    if (minDay <= dayCanBuy) {
        cout << minDay;
    }
    else {
        cout << -1;
    }
    cout << '\n';

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