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
    Node *l, *r;
    Node(int x) {
        this->x = x;
        l = r = NULL;
    }
};

Node* head = NULL;

Node* insert(Node* cur, int x) {
    if (cur == NULL) {
        return new Node(x);
    }
    
    if (x > cur->x) {
        cur->r = insert(cur->r , x);
    }
    else {
        cur->l = insert(cur->l, x);
    }

    return cur;
}

Node* getMinNode(Node* node) {
    while(node->l != NULL) {
        node = node->l;
    }
    return node;
}

Node* del(Node* cur, int x) {
    if (cur == NULL) return NULL;

    if (x > cur->x) {
        cur->r = del(cur->r, x);
    }
    else if (x < cur->x) {
        cur->l = del(cur->l, x);
    }
    else {
        if (cur->l == NULL) {
            Node* no = cur->r;
            delete cur;
            return no;
        }
        else if (cur->r == NULL) {
            Node* no = cur->l;
            delete cur;
            return no;
        }

        Node* nMin = getMinNode(cur->r);
        cur->x = nMin->x;
        cur->r = del(cur->r ,cur->x);
        return cur;
    }
    
    return cur;
}

void duyet(Node *node) {
    if (node == NULL) return;
    cout << node->x << ' ';
    duyet(node->l);
    duyet(node->r);
}

void pre() {
    cin.ignore();
}

void solve(int q) {
    string s;
    cin >> s >> n;
    if (s == "ins") {
        if (head == NULL) {
            head = insert(head, n);
        }
        else insert(head, n);
    }
    else if (s == "del")
    {
        head = del(head, n);
    }

    cout << "Query" << " #" << q << ": ";
    duyet(head);
    cout << '\n';
}

mainCode {
    sp;
    bool haveTestcases = true;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    FOR(1, t, i)
        solve(i);
}