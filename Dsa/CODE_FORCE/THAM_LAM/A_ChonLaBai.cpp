#include <bits/stdc++.h>
using namespace std;
#define ll long long
int a[55];

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    long long n, m;
    
    cin >> n;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    
    sort(a + 1, a + 1 + n, greater<int>());
    
    ll s1 = 0, s2 = 0, res = 0;
    
    for (int i = 1; i <= n / 2; i ++) {
      s1 += a[i];
      s2 += a[n - i + 1];
    }
      
    if (n % 2 == 1) {
      s1 += a[n / 2 + 1];
    }
    cout << abs(s2 - s1);
}