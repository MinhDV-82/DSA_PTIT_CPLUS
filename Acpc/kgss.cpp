#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

struct cData {
    int maxV;
    int secondMaxV;
};
cData t[400005];
int n;
int a[100005];
const int minV = INT_MIN;

void build(int id, int l, int r) {
    if (l == r) {
        t[id].maxV = a[l];
        t[id].secondMaxV = minV;
        return;
    }
    int m = (l + r) >> 1;

    build (id * 2, l, m);
    build (id * 2 + 1, m + 1 , r);

    if (t[id * 2].maxV  > t[id * 2 + 1].maxV) {
        t[id].maxV = t[id * 2].maxV;
        t[id].secondMaxV = max(t[id * 2 + 1].maxV, max(t[id * 2 + 1].secondMaxV, t[id * 2].secondMaxV));
    }
    else {
        t[id].maxV = t[id * 2 + 1].maxV;
        t[id].secondMaxV = max(t[id * 2].maxV, max(t[id * 2].secondMaxV, t[id * 2 + 1].secondMaxV));
    }
}

cData getHash(int id, int l, int r,int u ,int v, int o) {
    if (r < u || l > v) {
        return {minV, minV};
    }

    if (u <= l && r <= v) {
        return t[id];
    }

    int m = (l + r) >> 1;
    cData v1 = getHash(id * 2, l, m, u ,v ,o);
    cData v2 = getHash(id * 2 + 1, m + 1, r, u ,v ,o);

    vector<int> vals = {v1.maxV, v1.secondMaxV, v2.maxV, v2.secondMaxV};
    sort(vals.rbegin(), vals.rend());

    return {vals[0], vals[1]};



}

void update(int id, int l, int r, int pos, int val) {
    if (l == r) {
        t[id].maxV = val;
        t[id].secondMaxV = minV;
        return;
    }

    int m = (l + r) >> 1;
    if (pos <= m) update(id * 2, l, m, pos, val);
    else update(id * 2 + 1, m + 1, r, pos, val);

    if (t[id * 2].maxV > t[id * 2 + 1].maxV) {
        t[id].maxV = t[id * 2].maxV;
        t[id].secondMaxV = max(t[id * 2 + 1].maxV,
                               max(t[id * 2 + 1].secondMaxV, t[id * 2].secondMaxV));
    } else {
        t[id].maxV = t[id * 2 + 1].maxV;
        t[id].secondMaxV = max(t[id * 2].maxV,
                               max(t[id * 2].secondMaxV, t[id * 2 + 1].secondMaxV));
    }
}


mainCode {
    sp;
    int n, q, u, v;
    char c;
    cin >> n;
    FOR(1, n, i) {
        cin >> a[i];
    }
    build(1, 1, n);
    cin >> q;
    while(q--) {
        cin >> c >> u >> v;
        if (c == 'Q') {
            cData cData = getHash(1, 1, n, u, v, 2);
            cout << cData.maxV + cData.secondMaxV  << '\n';
        }
         
        else {
            a[u] = v;
           update(1, 1, n, u, v);
        }
    }
    
}