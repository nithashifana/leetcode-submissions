// Maximum product difference between two pairs
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-1] * nums[nums.size()-2] - nums[0] * nums[1];
    }
};