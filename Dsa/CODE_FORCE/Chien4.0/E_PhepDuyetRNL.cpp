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
    cin.ignore();
}

struct Node {
    int x;
    Node *l = NULL;
    Node *r = NULL;
    Node(int x) {
        this->x = x;
    }
};

void duyet(Node* node) {
    if (node == NULL) return;
    duyet(node->r);
    cout << node->x << ' ';
    duyet(node->l);
}

void solve()
{
    Node *head = NULL;

    string s, w;
    getline(cin, s);

    stringstream ss(s);
    vector<string>v;
    while(ss >> w) {
        v.push_back(w);
    }
 

    if (v[0] == "N") {
        cout << '\n';
        return;
    }
    Node *root = new Node(stoi(v[0]));
    queue<Node*>q;
    q.push(root);

    int i = 1;
    while(!q.empty() && i < v.size()) {
        Node* node = q.front();
        q.pop();
        if (i < v.size() && v[i] != "N") {
            node->l = new Node(stoi(v[i]));
            q.push(node->l);
        }
        i++;
        if (i < v.size() && v[i] != "N") {
            node->r = new Node(stoi(v[i]));
             q.push(node->r);
        }
        i++;
    }
    duyet(root);
    cout << '\n';
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