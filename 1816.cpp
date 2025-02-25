// Truncate Sentence
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        int n = 0;
        for(int i = 0; i < s.size(); i ++) {
                if(s[i] == ' ') {
                    n ++;
                }
                if(n == k) {
                    s.erase(s.begin() + i, s.end());
                }
            }
        return s;
    }
};