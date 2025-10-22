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

void solve()
{
    int N, S, M;
    cin >> N >> S >> M;
    int totalFood = S * M;
    int daysShopOpen = S - (S / 7);
    if (7 * M > 6 * N)
    {
        cout << -1;
    }
    else
    {
        int daysToBuy = (totalFood + N - 1) / N;
        if (daysToBuy > daysShopOpen)
            cout << -1;
        else
            cout << daysToBuy;
    }
    cout << '\n';
}

mainCode
{
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases)
        cin >> t;
    while (t--)
        solve();
}
