// Length of last word
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int k = 0;
        for(int i = s.size()-1; i >= 0; i --) {
            if(s[i] != ' ') k ++;
            else if(k > 0) break;
        }
        return k;
    }
};