// Letter Combinations of a Phone Number
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.empty()) return res;
        unordered_map<char, string> mpp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        backtrack(digits, 0, "", res, mpp);
        return res;
    }
    void backtrack(string digits, int i, string comb, vector<string>& res, const unordered_map<char, string>& mpp) {
        if(i == digits.size()) {
            res.push_back(comb);
            return;
        }
        string letters = mpp.at(digits[i]);
        for(char letter : letters) {
            backtrack(digits, i + 1, comb + letter, res, mpp);
        }
    }
};
