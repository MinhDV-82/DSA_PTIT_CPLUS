#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp                         \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

int solution(int a[], int n)
{
    map<int, int>mp;
    int countMax = 0;
    for(int i = 0; i < n; i++) {
        mp[a[i]]++;
        countMax = max(mp[a[i]], countMax);
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (mp[a[i]] == countMax) {
            res = max(res, a[i]);
        }
    }
    return res;
}

mainCode
{
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases)
    {
        cin >> t;
    }
    while (t--)
    {
        cin >> n;
        FOR(0, n - 1, i)
            cin >> a[i];
        cout << solution(a, n);
    }
}