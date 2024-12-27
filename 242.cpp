// Valid anagram
// Easy

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> arrs(26, 0);
        vector<int> arrt(26, 0);
        if(s.size() != t.size()) {
            return false;
        }
        for(int i = 0; i < s.size(); i ++) {
            arrs[s[i] - 'a'] += 1;
        }
        for(int i = 0; i < t.size(); i ++) {
            arrt[t[i] - 'a'] += 1;
        }
        for(int i = 0; i < 26; i ++) {
            if(arrs[i] != arrt[i]) {
                return false;
            }
        }
        return true;
    }
};