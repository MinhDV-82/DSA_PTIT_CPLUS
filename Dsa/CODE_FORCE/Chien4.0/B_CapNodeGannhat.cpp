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
    Node *l;
    Node *r;
    Node(int x) {
        this->x = x;
        l = r = NULL;
    }
} *head;

void insert(Node* node, int x) {
    if (node == NULL) {
        return;
    }
    int v = node->x;
    if (v > x) {
        if (node->l == NULL) {
            Node* newNode = new Node(x);
            node->l = newNode;
            return;
        }
        insert(node->l, x);
    }
    else {
        if (node->r == NULL) {
            Node* newNode = new Node(x);
            node->r = newNode;
            return;
        }
        insert(node->r, x);
    }
}

int queryMin(Node* node, int x) {
    if (node == NULL) {
        return 0;
    }
    
    int v = node->x;
    if (v > x) {
        return v;
    }
    else {

    }

}

void solve() {
    int q;
    cin >> n >> q;
    vector<int>v;
    FOR(1, n, i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    
    while(q--) {
        int x;
        cin >> x;
        int r2 = upper_bound(v.begin(), v.end(), x) - v.begin();
        int r1 = lower_bound(v.begin(), v.end(), x) - v.begin() - 1;
        int kq1, kq2;
        if (r1 < 0) {
            kq1 = 0;
        }
        else {
            kq1 = v[r1];
        }
        if (r2 == v.size()) {
            kq2 = 0;
        }
        else {
            kq2 = v[r2];
        }
        cout <<kq1 << ' ' << kq2 << '\n';

    }

}

mainCode {
    sp;
    bool haveTestcases = false;
    int t = 1;
    if (haveTestcases) {
        cin >> t;
    }
    pre();

    while(t--)
        solve();
}