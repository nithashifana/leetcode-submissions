// Toggle Light Bulbs
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int, int> mp;
        for (int b : bulbs) mp[b] = !mp[b];

        vector<int> res;
        for(auto &x : mp) {
            if(x.second) res.push_back(x.first);
        }
        sort(res.begin(), res.end());
        return res;
    }
};