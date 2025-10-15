#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

vector<vector<int>>res;
bool check[11];
vector<int>x;

class Solution {
public:
    void solve(int s, int j, int k) {
        if (j > k) {
            return;
        }
        if (s == 0) {
            res.push_back(x);
            return;                                                                                                      
        }
        
        for (int i = 1; i <= 9; i++) {
            if (!check[i] && s - i >= 0) {
                x[j] = i;
                check[i] = true;
                solve(v, s - i, j + 1, k);
                check[i] = false;
            }
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        x.resize(n + 1);
        solve(n, 0, k);
        return res;
    }
};

mainCode {
    sp;
   
}