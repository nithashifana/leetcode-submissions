// Minimum Difference Between Highest and Lowest of K Scores
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;
        sort(nums.begin(), nums.end());
        int mini = INT_MAX;
        for (int i = 0; i <= nums.size() - k; i++) {
            mini = min(mini, nums[i + k - 1] - nums[i]);
        }
        return mini;
    }
};
