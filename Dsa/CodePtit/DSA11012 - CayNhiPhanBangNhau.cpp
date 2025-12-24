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

bool dfs(Node* cur1, Node* cur2 ) {
    if (cur1 == nullptr && cur2 == nullptr) return true;
    else if (cur1 == nullptr || cur2 == nullptr) return false;

    int x = cur1->x;
    int y = cur2->x;
    if (x == y) {
        bool ok1 = dfs(cur1->l, cur2->l);
        bool ok2 = dfs(cur1->r, cur2->r);
        return ok1 && ok2;
    }
    return false;
}

void maketree(Node* & root) {
    map<int, Node *> mp;
    cin >> n;
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
}

void solve()
{
    Node *root = nullptr;
    Node* root2 = nullptr;
    maketree(root);
    maketree(root2);

    cout << dfs(root, root2) << '\n';
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