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

void duyet(vector<int>&a, int l, int r) {
    if (l > r) return;
    
    int m = (l + r) >> 1;

    cout << a[m] << ' ';
    duyet(a, l, m - 1);
    duyet(a, m + 1, r);
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
        vector<int>v;
        cin >> n;
        FOR(1, n, i)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        duyet(v, 0, v.size() - 1);
        
        cout << '\n';
    }
}