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
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

struct Node {
    int x;
    Node*l , *r;
    Node (int x) {
        this->x = x;
        l = r = NULL;
    }
};

void pre() {
    
}

Node* ins(Node* cur, int x) {
    if (cur == NULL) return new Node(x);
    if (x > cur->x) {
        cur->r = ins(cur->r, x);
    }
    else {
        cur->l = ins(cur->l, x);
    }
    return cur;
}

void pre(Node* cur) {
    if (cur == NULL) return;
    cout << cur->x <<' ';
    pre(cur->l);
    pre(cur->r);
}

void solve() {
    Node*head = NULL;
    cin >> n;
    FOR(1, n, i) {
        int x;
        cin >> x;
        head = ins(head, x);
    }
    pre(head);
    cout << endl;
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}