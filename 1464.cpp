// Maximum product of two elements in an array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max = 0;
        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] > nums[max]) {
                max = i;
            }
        }
        int max2 = (max == 0) ? 1 : 0;
        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] > nums[max2] && i != max) {
                max2 = i;
            }
        }
        return (nums[max] - 1)*(nums[max2] - 1);
    }
};