#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()


class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        map<int, bool> mp1, mp2;
        vector<int>a1, a2;
        vector<vector<int>>ans;

        for(auto x : nums1) {
            mp1[x] = true;
        }
        for (auto x : nums2) {
            mp2[x] = true;
        }

        for (auto x : nums1) {
            if (!mp2[x]) {
                a1.push_back(x);
                mp2[x] = true;
            }
        }

        for (auto x : nums2) {
            if (!mp1[x]) {
                a2.push_back(x);
                mp1[x] = true;
            }
        }

        ans.push_back(a1);
        ans.push_back(a2);

        return ans;

    }
};

mainCode {
    sp;
   
}