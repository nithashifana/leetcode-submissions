// Transform array by parity
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] % 2 == 0) {
                nums[i] = 0;
            }
            else nums[i] = 1;
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};