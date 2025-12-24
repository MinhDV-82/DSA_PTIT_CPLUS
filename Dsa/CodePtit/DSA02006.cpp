#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> res;
ll n, k;
ll x[1000005];
ll a[1000005];
ll cnt = 0;
bool dd[10005];

void sinhq(string s)
{
    if (s.size() == n)
    {
        ll tmp = 0;
        vector<int> tmpv;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                tmp += a[i + 1];
                tmpv.push_back(a[i + 1]);
            }
        }

        if (tmp == k)
        {
            res.push_back(tmpv);
        }
        return;
    }

    for (char i = '0'; i <= '1'; i++)
    {
        sinhq(s + i);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        res.clear();
        cin >> n >> k;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + 1 + n);

        sinhq("");
        sort(res.begin(), res.end());
        for (auto x : res)
        {
            cout << "[";
            for (int i = 0; i < x.size(); i++)
            {
                cout << x[i];
                if (i != x.size() - 1) cout << ' ';
            }
            cout << "]";
            cout << ' ';
        }
        if (res.size() == 0) cout << -1;
        cout << '\n';
    }
}