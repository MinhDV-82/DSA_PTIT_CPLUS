#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int cnt = 0;
        int res = 0;
        queue<int>q;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                q.push(i);
                cnt++;
                if (q.size() > k) {
                    cnt = i - q.front();
                }
            }
            else {
                cnt++;
            }
            res = max(res, cnt);
        }
        return res;
    }
};