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

void duyet() {

}


void duyet(int id, vector<int>&t, vector<int>&a) {
    if (id > n) {
        return ;
    }
    duyet(id * 2, t, a);
    cout << t[id] << ' ';
    duyet(id * 2 + 1, t, a);

}

void solve() {
    cin >> n;
    vector<int>t(n * 4 + 5, 0);
    vector<int>a(n + 5);
    for (int  i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    for (int i = 1; i <= n; i++) {
        t[i] = a[i];
        //cout << t[i] << ' ';
    }

    duyet(1, t, a);
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