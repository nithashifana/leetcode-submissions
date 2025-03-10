// Count pairs whose sum is less than target
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int k = 0;
        for(int i = 0; i < nums.size(); i ++) {
            for(int j = 0; j < nums.size(); j ++) {
                if(nums[i] + nums[j] < target && i != j) {
                    k ++;
                }
            }
        }
        return k/2;
    }
};