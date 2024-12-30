// Merge strings alternatively
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        string word;
        int i;
        for(i = 0; i < min(n, m); i ++) {
            word.push_back(word1[i]);
            word.push_back(word2[i]);
        }
        if(i < n) {
            word.append(word1.substr(i));
        }
        if(i<m) {
            word.append(word2.substr(i));
        }
        return word;
    }
};