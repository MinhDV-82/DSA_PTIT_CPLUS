#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    sort(a.begin(), a.end());
    set<int>s;
    ll res = 0;
    for (int p = 0; p < n; p++) {
        ll target = 3 * a[p];
        // Tìm bộ ba khác p sao cho a[i] + a[j] + a[k] = target
        for (int i = 0; i < n; i++) {
            //if (i == p) continue;
            int l = i + 1, r = n - 1;
            while (l < r) {
                //if (l == p) { l++; continue; }
                //if (r == p) { r--; continue; }
                ll sum = a[i] + a[l] + a[r];
                if (sum == target) {
                    res++;
                    //l++; r--;
                    s.insert(sum);
                    break;
                } else if (sum < target) l++;
                else r--;
            }
        }
    }
 
    cout << s.size() << "\n";
}