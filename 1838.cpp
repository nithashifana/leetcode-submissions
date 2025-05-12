// Frequency of the most frequent element
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l = 0, r = 0;
        long res = 0, sum = 0;
        while(r < nums.size()) {
            sum += nums[r];
            while(nums[r] * static_cast<long>(r - l + 1) > sum + k) {
                sum -= nums[l];
                l ++;
            }
            res = max(res, static_cast<long>(r - l + 1));
            r ++;
        }
        return static_cast<int>(res);
    }
};