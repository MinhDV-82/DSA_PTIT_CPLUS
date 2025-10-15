#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

int n, a[6], k;

vector<string>nps;
void sinhNP(int n, string s) {
    if (s.size() == n) {
        nps.push_back(s);
        return;
    }

    for (char i = '0'; i <= '1'; i++) {
        sinhNP(n, s + i);
    }
}

void solve()
{
    cin >> n >> k;
    FOR(1, n, i)
    {
        cin >> a[i];
    }

    // sort(a + 1, a + 1 + n);
    sinhNP(n, "");
    vector<vector<int>> res;
    for (int i = 0; i < nps.size(); i++)
    {
        int s = 0;
        vector<int> tmp;
        for (int j = 0; j < n; j++) {
            if (nps[i][j] == '1') {
                s += a[j + 1];
                tmp.push_back(a[j + 1]);
            }
        }

        if (s == k)
        {
            res.push_back(tmp);
        }
        // cout << '\n';
    }
    for (auto v : res)
    {
        for (auto e : v) {
            cout << e << " ";
        }
        cout << '\n';
    }

    cout << res.size();
}

mainCode
{
    sp;
    solve();
}