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
        l = r = nullptr;
    }
};

void pre() {
    
}


void bfs(Node* &root) {
    if (root == nullptr) return;

    queue<Node*>q;
    q.push(root);

    while(!q.empty()) {
        Node* node = q.front();
        q.pop();
        cout << node->x << ' ';
        if (node->l != nullptr) q.push(node->l);
        if (node->r != nullptr) q.push(node->r);
    }
    cout << '\n';
}

void solve() {
    Node* root = nullptr;
    cin >> n;
    map<int, Node*> mp;
    FOR(1, n, i) {
        int x, y;
        char c;
        cin >> x >> y >> c;
     
        if (mp[x] == nullptr) {
            mp[x] = new Node(x);
            if (root == nullptr) {
                root = mp[x];
            }
        }
  
        if (mp[y] == nullptr) {
            mp[y] = new Node(y);
        }

        if (c == 'L') {
            mp[x]->l = mp[y];
        }
        else {
            mp[x]->r = mp[y];
        }
    }
    bfs(root);
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