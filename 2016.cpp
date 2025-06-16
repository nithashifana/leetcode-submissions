// Maximum Difference Between Increasing Elements
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = -1, premin = nums[0];
        for(int i = 1; i < nums.size(); i ++) {
            if(nums[i] <= premin) premin = nums[i];
            else ans = max(ans, nums[i] - premin);
        }
        return ans;
    }
};