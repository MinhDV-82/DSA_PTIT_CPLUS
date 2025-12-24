/* =============== */
//! solution by : MinhDV-82
/* =============== */
#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define fi first
#define se second
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void pre()
{
}

bool ok (vector<int>&v1, vector<int>&v2) {
    map<int, bool>mp;
    FOR(0, v2.size() - 1, i) {
        if (mp[v1[i]]) return false;

        if (v1[i] != v2[i]) return false;    
        mp[v1[i]] = true;    
    }
    return true;
}

mainCode
{
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases)
    {
        cin >> t;
    }
    pre();

    while (t--)
    {
        vector<int>v, v2;
        cin >> n;
        FOR(1, n, i)
        {
            int x;
            cin >> x;
            v.push_back(x);
            v2.push_back(x);
        }
        sort(v2.begin(), v2.end());
        cout << ok(v, v2);
        cout << '\n';
    }
}