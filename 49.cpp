// Group Anagrams
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;

        for(string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            mpp[key].push_back(s);
        }

        vector<vector<string>> res;
        for(auto& s: mpp) {
            res.push_back(s.second);
        }
        return res;
    }
};