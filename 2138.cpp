// Divide a String Into Groups of Size k
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int i = 0;
        vector<string> res;
        while(i < s.size()) {
            string s1 = "";
            for(int j = 0; j < k; j ++) {
                if(i < s.size()) s1 += s[i ++];
                else s1 += fill;
            }
            res.push_back(s1);
        }
        return res;
    }
};