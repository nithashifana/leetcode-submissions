// Number of Strings That Appear as Substrings in Word
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int k = 0;
        for(int i = 0; i < patterns.size(); i ++) {
            if(word.find(patterns[i]) != string::npos) k ++;
        }
        return k;
    }
};