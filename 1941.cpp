// Check if All Characters Have Equal Number of Occurrences
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i ++) {
            mp[s[i]] ++;
        }
        int p = mp[s[0]];
        for(auto a : mp) {
            if(a.second != p) return false;
        }
        return true;
    }
};