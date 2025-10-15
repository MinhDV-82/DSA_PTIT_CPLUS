#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using u64 = unsigned long long;

// Phân tích thừa số nguyên tố
vector<pair<ll,int>> factorize(ll n) {
    vector<pair<ll,int>> res;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int c = 0;
            while (n % i == 0) {
                n /= i;
                c++;
            }
            res.push_back({i, c});
        }
    }
    if (n > 1) res.push_back({n, 1});
    return res;
}

// Tìm gcd của tất cả mũ
int gcdAll(const vector<pair<ll,int>>& f) {
    int g = 0;
    for (auto &p : f) g = gcd(g, p.second);
    return g;
}

// Liệt kê ước
vector<int> divisors(int g) {
    vector<int> d;
    for (int i = 1; 1LL*i*i <= g; i++) {
        if (g % i == 0) {
            d.push_back(i);
            if (i != g/i) d.push_back(g/i);
        }
    }
    sort(d.begin(), d.end());
    return d;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll X; cin >> X;
    if (X == 1) {
        cout << 1;
        return 0;
    }

    auto f = factorize(X);
    int g = gcdAll(f);

    ll ans = -1;
    for (int d : divisors(g)) {
        vector<int> b;
        for (auto &p : f) {
            if (p.second % d != 0) { b.clear(); break; }
            b.push_back(p.second / d);
        }
        if (b.empty()) continue;

        // Tính f(n)
        ll fn = 1;
        for (int x : b) {
            if ((long double)fn * (x+1) > 1e18) { fn = -1; break; }
            fn *= (x+1);
        }
        if (fn != d) continue;

        // Tạo n
        ll n = 1;
        bool overflow = false;
        for (int i = 0; i < (int)f.size(); i++) {
            for (int j = 0; j < b[i]; j++) {
                if ((long double)n * f[i].first > 1e18) { overflow = true; break; }
                n *= f[i].first;
            }
            if (overflow) break;
        }
        if (overflow) continue;

        if (ans == -1 || n < ans) ans = n;
    }

    cout << ans << "\n";
    return 0;
}
