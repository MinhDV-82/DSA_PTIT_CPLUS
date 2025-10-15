#include <bits/stdc++.h>
using namespace std;
#define FOR(a, b, i) for (int i = a; i <= b; i++)
#define FORR(b, a, i) for (int i = b; i >= a; i--)
#define ll long long
#define sp ios_base ::sync_with_stdio(0); cin.tie(0);cout.tie(0)
#define mainCode int main()

class Solution
{
private :
    vector<string> res;
    bool visited[1005];

public:
    void solve(int start, vector<string> &s, string &digits, string current)
    {
        if (start > digits.size()) return;

        int number = (int)(digits[start] - '0');

        if (current.size() == digits.size()) {
            res.push_back(current);
            return;
        }

        for (int i = 0; i < s[number].size(); i++) {
            char c = s[number][i];
            solve(start + 1, s, digits, current + c);
        }
    }

    vector<string> letterCombinations(string digits)
    {
        vector<string> init(105);
        string init_s = "";
        for (char i = 'a'; i <= 'z'; i++)
        {
            init_s += i;
        }
        for (int i = 2; i <= 6; i++)
        {
            string tmp = init_s.substr((i - 2) * 3, 3);
            init[i] = tmp;
        }
        init[7] = "pqrs";
        init[8] = "tuv";
        init[9] = "wxyz";
        solve(0, init, digits, "");
        return res;
    }
};

mainCode {
    Solution sol;
    vector<string> ans = sol.letterCombinations("23");
    for(auto x : ans) {
        cout << x << '\n';
    }
}