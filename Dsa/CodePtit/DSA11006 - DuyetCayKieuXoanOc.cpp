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
struct Node
{
    int x;
    Node *l, *r;
    Node(int x)
    {
        this->x = x;
        l = r = nullptr;
    }
};

int maxHei = 0;

void duyetxoanoc(Node *cur)
{
  if (cur == nullptr) return;
    queue<Node *> q;
    q.push(cur);
    bool ok = false; 

    while (!q.empty())
    {
        int n = q.size();
        vector<int> v;
        for(int i = 0; i < n; i++)
        {
            Node *node = q.front();
            q.pop();
            v.push_back(node->x);

            if (node->l != nullptr) q.push(node->l);
            if (node->r != nullptr) q.push(node->r);
        }

        if (!ok) {
            reverse(v.begin(), v.end());
        }

        for (int x : v) cout << x << ' ';
        ok = !ok;
    }
}

void solve()
{
    cin >> n;
    map<int, Node *> mp;
    Node *root = nullptr;
    FOR(1, n, i)
    {
        int x, y;
        char c;
        cin >> x >> y >> c;
        if (mp[x] == nullptr)
        {
            mp[x] = new Node(x);
            root = root == nullptr ? mp[x] : root;
        }
        if (mp[y] == nullptr)
        {
            mp[y] = new Node(y);
        }

        if (c == 'L')
        {
            mp[x]->l = mp[y];
        }
        else
        {
            mp[x]->r = mp[y];
        }
    }
    duyetxoanoc(root);
    cout << '\n';
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
        solve();
}