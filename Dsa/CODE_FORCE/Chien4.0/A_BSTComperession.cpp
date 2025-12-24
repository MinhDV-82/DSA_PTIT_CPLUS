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

struct Node
{
    int x;
    Node *l, *r;
    Node(int x)
    {
        this->x = x;
        l = r = NULL;
    }
} *head;

void pre()
{
}

Node *ins(Node *cur, int x)
{
    if (cur == NULL)
    {
        return new Node(x);
    }
    if (x > cur->x)
    {
        cur->r = ins(cur->r, x);
    }
    else
    {
        cur->l = ins(cur->l, x);
    }
    return cur;
}

Node *getNMin(Node *cur)
{
    while (cur->l != NULL)
    {
        cur = cur->l;
    }
    return cur;
}

Node *del(Node *cur, int x)
{
    if (cur == NULL)
        return NULL;

    if (x > cur->x)
    {
        cur->r = del(cur->r, x);
    }
    else if (x < cur->x)
    {
        cur->l = del(cur->l, x);
    }
    else
    {
        if (cur->l == NULL)
        {
            Node *tmp = cur->r;
            delete cur;
            return tmp;
        }
        if (cur->r == NULL)
        {
            Node *tmp = cur->l;
            delete cur;
            return tmp;
        }

        Node *nMin = cur->r;
        while(nMin->l != NULL) {
            nMin = nMin->l;
        }
        cur->x = nMin->x;
        cur->r = del(cur->r, cur->x);
    }
    return cur;
}



void prem(Node *cur)
{
    if (cur == NULL)
    {
        return;
    }

    cout << cur->x << ' ';
    prem(cur->l);
    prem(cur->r);
}
void inm(Node *cur)
{
    if (cur == NULL)
    {
        return;
    }

    inm(cur->l);
    cout << cur->x << ' ';
    inm(cur->r);
}
void postm(Node *cur)
{
    if (cur == NULL)
    {
        return;
    }

    postm(cur->l);
    postm(cur->r);
    cout << cur->x << ' ';
}

void solve()
{
    int x;
    while (cin >> x)
    {
       int y;
       if (x == 1) {
            cin >> y;
            head = ins(head, y);
       }
       if (x == 2) {
        cin >> y;
        head = del(head, y);
       }
       if (x == 3) {
        prem(head);
       }
       if (x == 4) {
        inm(head);
       }
       if (x == 5) {
        postm(head);
       }
    }
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
    pre();

    while (t--)
        solve();
}