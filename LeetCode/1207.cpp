#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()





class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int>mp1;
        bool dd[1005];

        for (int i = 0; i <= 1000; i++) {
            dd[i] = false;
        }
        for (auto x : arr) {
            mp1[x]++;
        }

        for (auto kv : mp1) {
            // key , value
            // kv.first, kv.second;
            int count = kv.second;
            if (dd[count]) return false;

            dd[count] = true;
        }

        return true;
    }
};



mainCode {
    sp;
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    Solution sol;
    cout << sol.uniqueOccurrences(arr);
}