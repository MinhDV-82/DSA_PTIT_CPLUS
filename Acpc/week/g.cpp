#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

unsigned ll a[97];
int n;

mainCode {
    sp;
    cin >> n;
    a[0] = 2;
    a[1] = 1; 
    FOR(2, n, i) {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n];
}