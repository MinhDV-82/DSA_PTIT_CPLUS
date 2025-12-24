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
    Node*l ,*r;
    Node(int x) {
        this->x = x;
        l = r = nullptr;
    }
};

void pre() {
    
}

Node* ins(Node* cur, int x) {
    if (cur == nullptr) return new Node(x);
    if (x > cur->x) {
        cur->r = ins(cur->r, x);
    }
    else if (x < cur->x) {
        cur->l = ins(cur->l, x);
    }
    return cur;
}

void bfs(Node* head) {
    if (head == nullptr) return;
    queue<Node*>q;
    q.push(head);
    vector<int>v;
    while(!q.empty()) {
        Node* cur = q.front();
        
        q.pop();
       v.push_back(cur->x);
        if (cur->r != nullptr)
            q.push(cur->r);
        if (cur->l != nullptr)
            q.push(cur->l);
    }
    for (int i = 0; i < v.size() ; i++) {
        cout << v[i];
        if (i != v.size() - 1) cout << ' ';
    }
}

void solve() {
    cin >> n;
    Node* head = nullptr;
    FOR(1, n, i) {
        int x;
        cin >> x;
        head = ins(head, x);
    }
    bfs(head);
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