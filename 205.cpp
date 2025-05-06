// Isomorphic strings
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        vector<int> m1(256, -1);
        vector<int> m2(256, -1);
        for(int i = 0; i < s.size(); i ++) {
            if(m1[s[i]] == -1) m1[s[i]] = i;
            if(m2[t[i]] == -1) m2[t[i]] = i;
            if(m1[s[i]] != m2[t[i]]) return false;
        }
        return true;
    }
};