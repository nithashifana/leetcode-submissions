// Sum of variable length array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int sum = nums[0];
        for (int i = 1, n = nums.size(); i < n; i++){
            int j = i - nums[i] - 1;
            nums[i] += nums[i - 1];
            sum += nums[i] - (j >= 0 ? nums[j] : 0);
        }
        return sum;
    }
};