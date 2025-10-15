#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define f first
#define s second
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int const NMAX = 1e6 + 5;
int a[NMAX];
int n, k;

void merge(int a[], int l1, int r1, int l2, int r2) {
    vector<int>tmp;
    int start = l1;
    int end = r2;
    while(l1 <= r1 && l2 <= r2) {
        if (a[l1] < a[l2]) {
            tmp.push_back(a[l1]);
            l1++;
        }
        else  {
            tmp.push_back(a[l2]);
            l2++;
        }
    }
    while(l1 <= r1) {
        tmp.push_back(a[l1]);
        l1++;
    }
    while (l2 <= r2)
    {
        tmp.push_back(a[l2]);
        l2++;
    }
    int k = 0;
    FOR(start, end, i) {
        a[i] = tmp[k++];
    }
}

void mergeSort(int a[], int l, int r) {
    if (l == r) {
        return;
    }
    int m = (l + r) >> 1;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, m + 1, r);
}

void solve() {
    cin >> n;
    FOR(1, n, i) cin >> a[i];
    mergeSort(a, 1, n);
    FOR(1, n, i) cout << a[i] << ' ';
    cout << '\n';
}

mainCode {
    sp;
    bool ok = true;
    int t = 1;
    if (ok) {
        cin >> t;
    }
    while(t--)
    solve();
}