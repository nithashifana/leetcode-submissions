// Find the Original Typed String I
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int possibleStringCount(string word) {
        int k = 1;
        for(int i = 0; i < word.size() - 1; i ++) {
            if(word[i] == word[i + 1]) k ++;
        }
        return k;
    }
};