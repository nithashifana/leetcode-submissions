// Find Maximum Number of String Pairs
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_map<string, int> mp;
        int k = 0;
        for(int i = 0; i < words.size(); i ++) {
            string w1 = string() + words[i][1] + words[i][0];
            if(mp[w1]) k ++;
            mp[words[i]] ++;
        }
        return k;
    }
};