#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp                       \
  ios_base ::sync_with_stdio(0); \
  cin.tie(0);                    \
  cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;
struct tui
{
  float weight;
  float value;
};

bool cmp(const tui &a, const tui &b)
{
  double r1 = a.value / a.weight;
  double r2 = b.value / b.weight;
  return r1 > r2;
}

ll s = 0;

map<int, pair<int, int>>mp;
int numberOfSubArray(std::vector<int> a)
{
  int n = a.size();
  int res = 0;
  for (int i = -1; i < n; i++) {
    int s = 0;
    for (int j = i + 1; j < n; j++) {
      s += a[j];

      if (j > mp[s].first) {
        mp[s].second++;
        mp[s].first = j;
        res = max(res, mp[s].second);
      }
    }
  }
  return res;

}

void solve()
{
  vector<tui> items;
  int totalWeight;

  cin >> n >> totalWeight;
  FOR(1, n, i)
  {
    float w, v;
    cin >> w >> v;
    items.push_back({w, v});
    totalWeight += w;
  }

  sort(items.begin(), items.end(), cmp);

}

mainCode
{
  sp;
  bool ok = true;
  int t = 1;
  if (ok)
  {
    cin >> t;
  }
  while (t--)
    solve();
}