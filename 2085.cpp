// Count common words with one occurence
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> mp1;
        unordered_map<string, int> mp2;
        for(int i = 0; i < words1.size(); i ++) {
            mp1[words1[i]] ++;
        }
        for(int i = 0; i < words2.size(); i ++) {
            mp2[words2[i]] ++;
        }
        int k = 0;
        for(auto [a, freq] : mp1) {
            if(freq == 1 && mp2[a] == 1) k ++;
        }
        return k;
    }
};