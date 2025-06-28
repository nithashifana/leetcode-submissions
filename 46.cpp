// Permutations
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
    vector<vector<int>> res;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(nums, 0);
        return res;
    }
    void backtrack(vector<int>& nums, int i) {
        if(i == nums.size()) {
            res.push_back(nums);
            return;
        } 
        for(int j = i; j <nums.size(); j ++) {
            swap(nums[i], nums[j]);
            backtrack(nums, i + 1);
            swap(nums[i], nums[j]);
        }
    }
};