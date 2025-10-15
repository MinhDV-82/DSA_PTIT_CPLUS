#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> fibPos;
    int f1 = 1, f2 = 2;
    fibPos.push_back(1);
    if (n >= 2) fibPos.push_back(2);
    while (true) {
        int f3 = f1 + f2;
        if (f3 > n) break;
        fibPos.push_back(f3);
        f1 = f2;
        f2 = f3;
    }

    int ans = -1;
    for (int pos : fibPos) {
        if (isPrime(a[pos])) {
            ans = max(ans, a[pos]);
        }
    }

    cout << ans << "\n";
    return 0;
}
