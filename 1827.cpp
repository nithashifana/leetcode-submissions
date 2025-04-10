// Minimum operations to make the array increasing
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int k, p = 0;
        for(int i = 0; i < nums.size()-1; i ++) {
            k = 0;
            if(nums[i] >= nums[i+1]) {
                k = k + nums[i] - nums[i+1] + 1;
                p += k;
                nums[i+1] += k;
                i --;
            }
        }
        return p;
    }
};