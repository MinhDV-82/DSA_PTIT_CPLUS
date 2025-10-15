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


map<char, ll>mp;

void solve() {
    cin >> n;
    string s;
    cin >> s;

    ll res = 0;
    
    int l = 1;
    ll cnt = 1;
    while (l < s.size()) {
        if (s[l] == s[l - 1]) {
            while(s[l] == s[l - 1]) {
                cnt ++;
                l++;
            }
            l--;
        }
        res = res + cnt * (cnt - 1) / 2;
        cnt = 1;
        l++;
    }
    
   

    cout << res;
}

mainCode {
    sp;
    bool ok = false;
    int t = 1;
    if (ok) {
        cin >> t;
    }
    while(t--)
        solve();
}