#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

multiset<int> t[400005];
int a[100005];

void build(int id, int l, int r) {
    if (l == r) {
        t[id].insert(a[l]);
        return;
    }

    int m = (l + r) >> 1;
    build(id * 2, l, m);
    build(id * 2 + 1, m + 1, r);
    t[id].insert(t[id * 2].begin(), t[id * 2].end());
    t[id].insert(t[id * 2 + 1].begin(), t[id * 2 + 1].end());

}


int get(int id, int l, int r, int u, int v, int x) {
    if (v < l || u > r) {
        return -1;
    }

    if (l >= u && r <= v) {
        auto it = t[id].upper_bound(x);
        int val = -1;
        if (it != t[id].end()) 
        {
            val = *it;
        }
        return val;
    }

    int m = (l + r) >> 1;
    int val1 = get (id * 2, l, m, u, v, x);
    int val2 = get (id * 2 + 1, m + 1, r, u, v, x);
    if (val1 == -1 && val2 == -1) {
        return -1;
    }
    if (val1 != -1 && val2 != -1) {
        return min(val1, val2);
    }

    return max(val1, val2);
}

void update(int id, int l, int r, int pos, int oldV, int newV) {
    auto it = t[id].find(oldV);
    if (it != t[id].end()) t[id].erase(it);

    t[id].insert(newV);
    if (l == r) {
        return;
    }

    int m = (l + r) >> 1;
    if (pos <= m) update(id * 2, l, m, pos, oldV, newV);
    else update(id * 2 + 1, m + 1, r, pos, oldV, newV);
}

void solve() {
    int n, m;
    cin >> n >> m;
    FOR(1, n, i) cin >> a[i];
    build(1, 1, n);
    
    int q, x, u, v;
    while(m--) {
        cin >> q;
        if (q == 2) {
            cin >> u >> v >> x;
            cout << get(1, 1, n, u, v, x) << '\n';
        }
        else {
            int pos, newV;
            cin >> pos >> newV;
            int oldV = a[pos];
            a[pos] = newV;
            update(1, 1, n, pos, oldV, newV);
        }
    }
}

mainCode {
    sp;
    solve();
}