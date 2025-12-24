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

void pre() {
    
}

struct Node {
    int x;
    Node *left;
    Node *right;
    Node(int x) {
        this->x = x;
        left = right = NULL;
    }
};

void insert(Node *node, int x) {
    if (node == NULL) {
        return;
    }
    int v = node->x;
    if (v > x) {
        if (node->left == NULL) {
            Node* newNode = new Node(x);
            node->left = newNode;
            return;
        }
        insert(node->left, x);
    }
    else {
        if (node->right == NULL) {
            Node* newNode = new Node(x);
            node->right = newNode;
            return;
        }
        insert(node->right, x);
    }
}

void duyet(Node *node) {
    if (node == NULL) {
        return;
    }

    duyet(node->left);
    duyet(node->right);
    cout << node->x << ' ';
}

void solve(int t) {
    cin >> n;
    Node * head = NULL;
    FOR(1, n, i) {
        int x;
        cin >> x;
        if (head == NULL) {
            head = new Node(x);
        }
        else {
            insert(head, x);
        }
    }
    cout << "Test #" << t << ": ";
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

    FOR(1, t, i) {
        solve(i);
    }
}