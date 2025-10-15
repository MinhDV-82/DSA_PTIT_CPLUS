#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int n;
int dd[15];
char x[15];

void sol(string s) {
    if (s.size() == n) {
        cout << s;
        cout << " ";
        return;
    }
    for (char c = 'A'; c <= 'B'; c++) {
        sol(s + c);
    }
}

void solve() {
    cin >> n;
    sol("");
    cout << '\n';
}

mainCode {
    sp;
    int t;
    cin >> t;
    while(t--)
    solve();
}