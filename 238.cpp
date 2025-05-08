// Product of array except self
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p = 1, k = 1, numZero = 0;;
        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] == 0) {
                numZero ++;
            }
            else k *= nums[i];
            p *= nums[i];
        }
        for(int i = 0; i < nums.size(); i ++) {
            if(numZero > 1) nums[i] = 0;
            else if(numZero == 1) nums[i] = nums[i] == 0 ? k : 0;
            else nums[i] = p/nums[i];
        }
        return nums;
    }
};