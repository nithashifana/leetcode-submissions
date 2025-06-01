// Maximum Ascending Subarray Sum
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0];
        int maxi = sum;
        for(int i = 1; i < nums.size(); i ++) {
            if(nums[i] > nums[i - 1]) sum += nums[i];
            else sum = nums[i];
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};