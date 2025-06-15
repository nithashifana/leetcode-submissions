// Split a String in Balanced Strings
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string s) {
        int k = 0, m = 0;
        for(int i = 0; i < s.size(); i ++) {
            if(s[i] == 'L') k ++;
            else k --;
            if(k == 0) m ++;
        }
        return m;
    }
};