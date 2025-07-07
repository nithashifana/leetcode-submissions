// Letter Case Permutation
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> res;
    vector<string> letterCasePermutation(string s) {
        backtrack(s, 0);
        return res;
    }
    void backtrack(string s, int i) {
        if(i == s.size()) {
            res.push_back(s);
            return;
        }
        if(isalpha(s[i])) {
            s[i] = tolower(s[i]);
            backtrack(s, i + 1);
            s[i] = toupper(s[i]);
            backtrack(s, i + 1);
        } else backtrack(s, i + 1);
    }
};