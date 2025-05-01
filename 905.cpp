// Sort array by parity
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0;
        for(int j = 0; j < nums.size(); j ++) {
            if(nums[j] % 2 == 0) {
                std::swap(nums[i], nums[j]);
                i ++;
            }
        }
        return nums;
    }
};