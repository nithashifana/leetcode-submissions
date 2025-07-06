// Two Sum
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp; // val->index
        for(int i = 0; i < nums.size(); i ++) {
            int num = target - nums[i];
            if(mpp.find(num) != mpp.end()) {
                return {mpp[num], i};
            }
            else mpp[nums[i]] = i;
        }
        return {};
    }
};