#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define sekidoCode int main()
#define sp                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)

#define p_b(v) push_back(v)
#define f first
#define s second

const int mod = 1e9 + 7;
const int max_v = INT_MAX;

int n;
pair<int, int> p[2000005];
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.f == b.f)
    {
        return a.s < b.s;
    }
    return a.f < b.f;
}

sekidoCode
{
    sp;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        FOR(1, n, i)
        {
            cin >> p[i].f;
        }
        FOR(1, n, i)
        {
            cin >> p[i].s;
        }
        sort(p + 1, p + 1 + n, cmp);

        int i = 2, startTime = p[1].f, endTime = p[1].s;  // Bắt đầu từ i = 2
        int cnt = 1;
        while (i <= n)
        {
            if (p[i].f == startTime && p[i].s >= endTime || p[i].f < endTime && p[i].s >= endTime)
            {
                i++;
                continue;
            }
            else if (p[i].f >= startTime && p[i].s <= endTime)
            {
                startTime = p[i].f;
                endTime = p[i].s;
                i++;
            }
            else if ((p[i].f >= startTime && p[i].s >= endTime) || p[i].f >= endTime)
            {
                cnt++;
                startTime = p[i].f;
                endTime = p[i].s;
                i++;
            }
        }
        cout << cnt << '\n';
    }
}