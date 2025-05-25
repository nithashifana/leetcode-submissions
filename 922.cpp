// Sort array by parity II
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i = 0, j = 1, n = nums.size();
        while(i < n && j < n) {
            if(nums[i] % 2 == 0) i += 2;
            else if(nums[j] % 2 == 1) j += 2;
            else {
                swap(nums[i], nums[j]);
                j += 2;
                i += 2;
            }
        }
        return nums;
    }
};