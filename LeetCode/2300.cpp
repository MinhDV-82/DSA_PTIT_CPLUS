#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

class Solution {
public:
    int getSuccessPair(vector<int> a, int key, long long value) {
        long long l = 0, r = a.size() - 1;
        while(l <= r) {
            long long m = (l + r) / 2;
            long long p = value * m;
            if (p >= key) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        return (a.size() - r + 1);
    }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int>res;
        for (auto x : spells) {
            long long key = x - success;
            int resX = getSuccessPair(potions, key, x);
            if (key > 0) {
                res.push_back(resX);
            }
        }
        return res;
    }

};

int main() {
    
}