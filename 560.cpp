// Subarray Sum Equals K
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        freq[0] = 1;
        int prefixSum = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i ++) {
            prefixSum += nums[i];
            count += freq[prefixSum - k];
            freq[prefixSum] ++;
        }
        return count;
    }
};