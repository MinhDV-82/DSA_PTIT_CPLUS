#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

vector<string>v;
char x[10];
bool dd[10];

void out(int n) {
    string tmp = "";
    FOR(1, n, i) {
        tmp += x[i];
    }
    cout << '\n';
}

void hoanvi(int j, string s) {
    for (int i = 0; i < s.size(); i++) {
        if (dd[i]) continue;

        x[j] = s[i];
        if (j == s.size()) {
            out(s.size());
            continue;
        }
        dd[i] = true;
        hoanvi(j + 1, s);
        dd[i] = false;
    }
}


void solve() {
    string s;
    long long K;
    cin >> s >> K;

    sort(s.begin(), s.end());
    for (long long i = 1; i < K; i++) {
        next_permutation(s.begin(), s.end());
    }
    cout << s;
}

mainCode {
    sp;
    solve();
}