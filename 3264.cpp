// Final array state after k multiplication operations I
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int min;
        for(int i = 0; i < k; i ++) {
            min = 0;
            for(int j = 0; j < nums.size(); j ++) {
                if(nums[min] > nums[j]) {
                    min = j;
                }
            }
            nums[min] *= multiplier;
        }
        return nums;
    }
};