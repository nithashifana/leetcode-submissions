// Count words with a given prefix
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int k = 0;
        for(int i = 0; i < words.size(); i ++) {
            if(words[i].find(pref) == 0) {
                k ++;
            }
        }
        return k;
    }
};
// Deprecated fn - str.starts_with(), str.ends_with()