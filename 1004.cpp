// Max Consecutive ones III
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0;
        int maxLen = 0;
        int zero = 0;
        while(r < nums.size()) {
            if(nums[r] == 0) zero ++;
            while(zero > k) {
                if(nums[l] == 0) zero --;
                l ++;
            }
            maxLen = max(maxLen, r - l + 1);
            r ++;
        }
        return maxLen;
    }
};