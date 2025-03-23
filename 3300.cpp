// Minimum element after replacement with digit sum
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum;
        for(int i = 0; i < nums.size(); i ++) {
            sum = 0;
            while(nums[i] > 0) {
                sum += nums[i] % 10;
                nums[i] /= 10;
            }
            nums[i] = sum;
        }
        int min = nums[0];
        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] < min) {
                min = nums[i];
            }
        }
        return min;
    }
};