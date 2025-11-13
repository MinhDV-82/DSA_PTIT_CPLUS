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

string d[2] = {"6", "8"};

bool canOut(string s) {
    int cnt_6 = 1, cnt_8 = 1;
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            if (s[i] == '6') {
                cnt_6++;
            }
            else {
                cnt_8++;
            }
        }
        else {
            cnt_6 = 1;
            cnt_8 = 1;
        }
        if (cnt_8 >= 2) return false;
        if (cnt_6 > 3) return false;
    }
    return (s[0] == '8' && s[s.size() - 1] == '6');
}

void sol(string s) {
    if (s.size() == n) {
        if (canOut(s)) cout << s << '\n';
        return;
    }
    for (auto x : d) {
        sol(s + x);
    }
}

void solve() {
    cin >> n;
    sol("");
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