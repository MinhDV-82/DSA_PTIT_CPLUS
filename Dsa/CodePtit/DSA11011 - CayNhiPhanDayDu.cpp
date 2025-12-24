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

bool dfs(Node* cur) {
    if (cur == nullptr || cur->l == nullptr && cur->r == nullptr) {
        return true;
    }

    if (cur->l == nullptr || cur->r == nullptr) {
        return false;
    }

    bool ok1 = dfs(cur->l);
    bool ok2 = dfs(cur->r);
    return ok1 && ok2;
}

void solve()
{
    cin >> n;
    map<int, Node *> mp;
    Node *root = nullptr;
    maxHei = 0;

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

    cout << dfs(root) << '\n';
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