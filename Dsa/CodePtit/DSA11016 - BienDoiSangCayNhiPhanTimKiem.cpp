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

void duyet(Node* cur, vector<int>&a) {
    if (cur == nullptr) return;
    a.push_back(cur->x);
    duyet(cur->l, a);
    duyet(cur->r, a);
}

void lnr(Node* cur) {
    if (cur == nullptr) return;
    lnr(cur->l);
    cout << cur-> x<< ' ';
    lnr(cur->r);
}

void remake(Node* cur,int &index, vector<int> &v) {
    if (cur == nullptr) return;

    remake(cur->l, index, v);
    cur->x = v[index++];
    remake(cur->r, index, v);
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
        duyet(root, v);
        sort(v.begin(), v.end());
        int index = 0;
        remake(root, index, v);
        lnr(root);
        cout << '\n';
    }
}