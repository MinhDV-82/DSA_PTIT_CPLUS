#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

int a[1000005];
int n;
long long sum = 0;

bool ok (int num) {
    return sum > num;
}

mainCode {
    sp;
    cin >> n;
    FOR(1, n, i) cin >> a[i];
    sort(a + 1, a + 1 + n);
    FOR(1, n - 1, i) sum += a[i];
    if (ok(a[n])) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}