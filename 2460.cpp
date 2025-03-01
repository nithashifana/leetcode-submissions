// Apply operations to an array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> arr;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] = 2 * nums[i];
                nums[i + 1] = 0;
            }
            if (nums[i] != 0) {
                arr.push_back(nums[i]);
            }
        }
        if (nums[nums.size() - 1] != 0) {
            arr.push_back(nums[nums.size() - 1]);
        }
        for (int i = arr.size(); i < nums.size(); i++) {
            arr.push_back(0);
        }

        return arr;
    }
};