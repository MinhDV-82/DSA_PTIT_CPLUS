#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mainCode int main()

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char, int>mp1;
        map<char, int>mp2;

        if (word1.size() != word2.size()) return false;

        for (auto x : word1) {
            mp1[x]++;
        }

        for (auto x : word2) {
            // abed , cccc
            if (mp1[x] == 0) {
                return false;
            }
            mp2[x]++;
        }

        vector<int>v1, v2;
        for (auto x : mp1) {
            v1.push_back(x.second);
        }
        for (auto x : mp2) {
            v2.push_back(x.second);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] != v2[i]) return false;
        }

        return true;
    }
};

mainCode {
    sp;
    // solve();
}