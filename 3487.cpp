// Maximum unique subarray sum after deletion
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int k = nums[nums.size()-1];
        int max = k;
        for(int i = nums.size() - 1; i > 0 ; i --) {
            if(nums[i] != nums[i - 1] ) {
                k += nums[i - 1];
            }
            if(max > k) {
                return max;
            }
            max = k;
        }
        return k;
    }
};