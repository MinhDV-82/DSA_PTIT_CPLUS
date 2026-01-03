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

struct node {
    int x;
    node*l, *r;
    node(int x) {
        this->x = x;
        l = r = nullptr;
    }
};

void pre() {
    cin.ignore();
}

void rnl(node* cur) {
  if (cur == nullptr) return;
  rnl(cur->r);
  cout << cur->x << ' ';
  rnl(cur->l);
}

int getNum(string &s) {
    int num = 0;
    for (auto x : s) {
        num = num * 10 + x - '0';
    }
    return num;
}

void solve() {

    string s, w;
    getline(cin, s);
    stringstream ss(s);
    vector<string>v;

    while(ss >> w) {
        v.push_back(w);
    }
    node* head = new node(getNum(v[0]));
    queue<node*>q;
    q.push(head);
    int i = 1;
    while(!q.empty() && i < v.size()) {
        node* nod = q.front();
        q.pop();
        if (i < v.size() && v[i] != "N") {
            nod->l = new node(getNum(v[i]));
            q.push(nod->l);
        }
        i++;
        if (i < v.size() && v[i] != "N") {
            nod->r = new node(getNum(v[i]));
            q.push(nod->r);
        }
        i++;
    }
    rnl(head);
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

    while(t--)
        solve();
}