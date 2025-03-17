// Divide array into equal pairs
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map <int, int> mp;
        for(int i = 0; i < nums.size(); i ++) {
            mp[nums[i]] ++;
        }
        for(auto& i : mp) {
            if(i.second % 2) return false;
        }
        return true;
    }
};