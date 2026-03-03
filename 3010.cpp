// Divide an Array Into Subarrays With Minimum Cost I
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a = 100;
        int b = 100;
        for(int i = 1; i < nums.size(); i ++) {
            if(nums[i] < a) {
                b = a;
                a = nums[i];
            } else if(nums[i] < b) {
                b = nums[i];
            }
        }
        return nums[0] + a + b;
    }
};