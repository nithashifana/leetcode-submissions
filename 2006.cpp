// Count Number of Pairs With Absolute Difference K
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int m = 0;
        for(int i = 0; i < nums.size(); i ++) {
            m += mp[nums[i] - k] + mp[nums[i] + k];
            mp[nums[i]] ++;
        }
        return m;
    }
};