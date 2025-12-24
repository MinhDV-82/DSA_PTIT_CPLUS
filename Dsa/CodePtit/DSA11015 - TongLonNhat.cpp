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

// Node *mp[100005];
// int base = 1e4;

int res;

int dfs(Node *&cur)
{
    if (cur == nullptr)
        return INT_MIN;

    if (cur->l == nullptr && cur->r == nullptr)
        return cur->x;

    int s1 = dfs(cur->l);
    int s2 = dfs(cur->r);

    if (cur->l != nullptr && cur->r != nullptr)
    {
        res = max(res, s1 + s2 + cur->x);
        return max(s1 + cur->x, s2 + cur->x);
    }

    return cur->l == nullptr ? s2 + cur->x : s1 + cur->x;
}

void add(Node *&cur, int u, int v, char c)
{
    if (cur->x == u)
    {
        if (c == 'L')
        {
            cur->l = new Node(v);
        }
        else
        {
            cur->r = new Node(v);
        }
    }
    else
    {
        if (cur->l)
            add(cur->l, u, v, c);
        if (cur->r)
            add(cur->r, u, v, c);
    }
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
        res = INT_MIN;
        Node *root = nullptr;
        cin >> n;
        FOR(1, n, i)
        {
            int x, y;
            char c;
            cin >> x >> y >> c;
            if (root == nullptr)
            {
                root = new Node(x);
            }
            add(root, x, y, c);
        }
        dfs(root);
        cout << res << '\n';
    }
}