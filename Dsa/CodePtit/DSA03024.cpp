#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

struct cD {
    int st;
    int end;
};

int const NMAX = 1e6 + 5;
cD a[NMAX];
int n, k;

bool cmp(cD &a, cD &b) {
    return a.end < b.end;
}

void solve() {
    cin >> n;
    FOR(1, n, i) {
        cin >> a[i].st >> a[i].end;
    }
    sort(a + 1, a + 1 + n, cmp);
    int end = a[1].end;
    int res = 1;
    for (int i = 2; i <= n; i++) {
        if (a[i].st >= end) {
            res++;
            end = a[i].end;
        }
    }
    cout << res << '\n';
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