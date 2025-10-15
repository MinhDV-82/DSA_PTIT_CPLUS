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

ll nt[100005];

ll dd[100005];



void solve() {
    for(ll i = 2; i * i <= 100005; i++) {
        if (nt[i] == 0)
            for (ll j = i; j <= 100005; j += i) {
                if (nt[j] == 0)
                    nt[j] = i;
            }
    }

    FOR(1, 100005, i) {
        if (nt[i] == 0) {
            nt[i] = i;
        }
    }

    cin >> n >> k;
    FOR(1, n, i) {
        cin >> a[i];
    }

    FOR(1, n, i) {
        int tmp = a[i];

        while(tmp != 1) {
            dd[tmp]++;
            dd[nt[tmp]]++;
            // cout << tmp << '\n';

            tmp /= nt[tmp];
        }
    }

    vector<int>res;
    FOR(1, k, i) {
        int pt = i;
        bool ok = true;
        while(pt != 1) {
            if (dd[pt] || dd[nt[pt]]) {
                ok = false;
                break;
            }
            pt /= nt[pt];
        }
        if (ok) {
            res.push_back(i);
        }
    }
    cout << res.size() << '\n';
    FOR(0, res.size() - 1, i) {
        cout << res[i] << ' ';
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