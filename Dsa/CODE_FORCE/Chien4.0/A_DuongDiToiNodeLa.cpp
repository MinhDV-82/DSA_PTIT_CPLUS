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
    Node* left;
    Node* right;
    Node(int data) {
        x = data;
        left = right = NULL;
    }
};

bool nt(ll x) {
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return x >= 2;
}

void duyet(Node *node, int cnt, int &res) {
    if (node == NULL) {
        return;
    }
    int x = node->x;
    if(nt(x)) cnt++;;
    res = max(res, cnt);
    duyet(node->left, cnt, res);
    duyet(node->right, cnt, res);
}

void solve() {
    map<int, Node*>mp;
    cin >> n;

    Node *head = NULL;
    int res = 0;

    FOR(1, n, i) {
        int u, v;
        char c;
        cin >> u >> v >> c;
        if (mp[u] == NULL) {
            Node* node = new Node(u);
            mp[u] = node;
            if (head == NULL) {
                head = node;
            }
        }

        if (mp[v] == NULL) {
            Node* node = new Node(v);
            mp[v] = node;
        }
        
        if (c == 'L') {
            mp[u]->left = mp[v];
        }
        else {
            mp[u]->right = mp[v];
        }
    }


    duyet(head, 0, res);
    cout << res << '\n';
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