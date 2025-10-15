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
    cin >> n;
    FOR(0, n - 1, i) cin >> a[i];
    vector<string>res;
    FOR(0, n - 1, i) {
        string tmp = "";
        int j = i - 1;
        int value = a[i];
        while (j >= 0 && a[j] > value) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = value;

        tmp = "Buoc " + to_string(i) + ": ";
        FOR(0, i, k) {
            tmp += to_string(a[k]) + ' ';
        }
        res.push_back(tmp);
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i] << '\n';
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