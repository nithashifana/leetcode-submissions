// Count Binary Substrings
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        int res = 0;
        int prevLen = 0;
        int currLen = 1;
        for(int i = 1; i < s.size(); i ++) {
            if(s[i] == s[i - 1]) currLen ++;
            else {
                res += min(currLen, prevLen);
                prevLen = currLen;
                currLen = 1;
            }
        }
        res += min(prevLen, currLen);
        return res;
    }
};