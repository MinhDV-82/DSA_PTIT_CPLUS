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
int a[NMAX];
int n, k;

bool ma[105][105];

bool isValid(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= n && ma[x][y] == 1;
}

bool ok = false;
vector<string>res;
void mec(int x, int y, string cur) {
    if (ma[x][y] == 0) return;
    
    if (x >= n && y >= n) {
        res.push_back(cur);
        return;
    }

    if (isValid(x + 1, y)) 
    {
        mec(x + 1, y, cur + 'D');
    }
    if (isValid(x, y + 1)) {
        mec(x, y + 1, cur + 'R');
    }
}

void solve() {
    cin >> n;
    res.clear();
    FOR(1, n, i) {
        FOR(1, n, j) {
            cin >> ma[i][j];
        }
    }
    
    mec(1, 1, "");
    if (res.size() == 0) {
        cout << -1;
    }
    else {
        sort(res.begin(), res.end());
        for (auto x : res) {
            cout << x << ' ';
        }
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