// Miniumum deletions for atmost k distinct characters
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char, int> mp;
        for(int i = 0; i < s.size(); i ++) {
            mp[s[i]] ++;
        }
        if(mp.size() <= k) return 0;
        
        vector<int> freq;
        for(auto& it : mp) freq.push_back(it.second);
        sort(freq.begin(), freq.end());
        
        int d = 0;
        int extra = mp.size() - k;
        for(int i = 0; i < extra; ++i) {
            d += freq[i]; 
        }

        return d;
    }
};