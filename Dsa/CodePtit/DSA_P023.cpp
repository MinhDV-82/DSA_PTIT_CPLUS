#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

int x[25];
bool nt(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return x >= 2;
}

vector<string>snp;

bool check(string s) {
    int cnt = 0;
    FOR(0, s.size() - 1, i) {
        if (s[i] == '1') cnt++;
    } 
    return cnt == k;
}

void sinh(string s) {
    if (s.size() == n) {
        if (check(s)) {
            snp.push_back(s);
        }
        return;
    }
    for (char c = '0'; c <= '1'; c++) {
        sinh(s + c);
    }
}


void solve() {
    cin >> n >> k;
    sinh("");
    sort(snp.begin(), snp.end(), greater<string>());
    for (int i = 0; i < snp.size(); i++) {
        if (nt(i + 1)) {
            cout << i + 1 << ": ";
            for (int j = 0; j < snp[i].size(); j++) {
                if (snp[i][j] == '1') {
                    cout << j + 1 << ' ';
                }
            }
            cout << '\n';
        }
    }
}

mainCode {
    sp;
    solve();
}