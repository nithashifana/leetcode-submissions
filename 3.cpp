// Longest Substring Without Repeating Characters
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0, l = 0;
        set<char> present;
        for(int r = 0; r < s.size(); r ++) {
            while(present.find(s[r]) != present.end()) {
                present.erase(s[l]);
                l ++;
            }
            present.insert(s[r]);
            res = max(res, r - l + 1);
        }
        return res;
    }
};