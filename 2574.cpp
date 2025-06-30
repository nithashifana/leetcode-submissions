// Left and Right Sum Differences
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> arr(nums.size(), 0);
        for(int i = 1; i < nums.size(); i ++) {
            arr[i] = arr[i - 1] + nums[i -1];
        }
        int r = 0;
        for(int i = nums.size() - 2; i >= 0; i --) {
            r += nums[i + 1];
            arr[i] = abs(arr[i] - r);
        }
        return arr;
    }
};