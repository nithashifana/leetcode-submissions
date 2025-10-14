// Longest Increasing Subsequence
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        // find all increasing subseq
        int n = nums.size();
        vector<int> L(n, 1);
        for(int i = n - 2; i >= 0; i --) {
            for(int j = i + 1; j < n; j ++) {
                if(nums[j] > nums[i]) {
                    L[i] = max(L[i], 1 + L[j]);
                }
            }
        }
        return *max_element(L.begin(), L.end());
    }
};