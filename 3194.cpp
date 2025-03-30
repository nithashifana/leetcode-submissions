// Minimum avg of smallest and largest elements
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        double min = (nums[0] + nums[nums.size() - 1])/2.00000;
        for(int i = 0; i < nums.size()/2; i ++) {
            if(min > (nums[i] + nums[nums.size() - 1 - i])/2.00000) {
                min = (nums[i] + nums[nums.size() - 1 - i])/2.00000;
            }
        }
        return min;
    }
};