// Find all numbers disappeared in an array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int max = 0;
        vector<int> res;
        vector<int> arr(nums.size() + 1, 0);
        for (int i = 0; i < nums.size(); i++) {
            arr[nums[i]] = 1;
        }
        for (int i = 1; i <= nums.size(); i++) {
            if (arr[i] == 0) {
                res.push_back(i);
            }
        }
        return res;
    }
};