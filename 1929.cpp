// Concatenation of array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i < n; i ++) {
            ans.push_back(nums[i]);
        }
        for(int i = n; i < 2*n; i ++) {
            ans.push_back(nums[i-n]);
        }
        return ans;
    }
};