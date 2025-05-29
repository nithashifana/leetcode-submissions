// Minimize String Length
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i ++) {
            mp[s[i]] ++;
        }
        return mp.size();
    }
};