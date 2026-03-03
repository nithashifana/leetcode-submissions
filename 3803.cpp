// Count Residue Prefixes
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int residuePrefixes(string s) {
        string ss = "";
        int p = 0;
        int n = 0;
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i ++) {
            ss += s[i];
            mp[s[i]] ++;
            if(mp[s[i]] == 1) n ++;
            if(ss.size() % 3 == n) p ++; 
        }
        return p;
    }
};