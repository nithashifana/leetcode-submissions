// House Robber II
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob1(vector<int>& nums) {
        if(nums.size() < 2) {
            return nums[0];
        }
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        for(int i = 2; i < nums.size(); i ++) {
            dp[i] = max(nums[i] + dp[i-2], dp[i -1]);
        }
        return dp[nums.size()-1];
    }
    int rob(vector<int>& nums) {
        if(nums.size() < 2) {
            return nums[0];
        }
        vector<int> dp(nums.size() -1 , 0);
        vector<int> dp2(nums.size() -1 , 0);
        for(int i = 0; i < nums.size() - 1; i ++) {
            dp[i] = nums[i];
            dp2[i] = nums[i + 1];
        }
        int a = rob1(dp);
        int b = rob1(dp2);
        return max(a, b);
    }
};

// skip last house do hr 1
// skip first house do hr 1
// max(1, 2)