// Generate Parentheses
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        dfs(0, 0, "", n, res);
        return res;
    }
    void dfs(int o, int c, string s, int n, vector<string>& res) {
        if(o == c && o + c == n * 2) {
            res.push_back(s);
            return;
        }
        if(o < n) {
            dfs(o + 1, c, s + "(", n, res);
        }
        if(c < o) {
            dfs(o, c + 1, s + ")", n, res);
        }
    }
};