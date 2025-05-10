// Max consecutive ones
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int k = 0, max = 0;
        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] == 0) k = 0;
            else k ++;
            if(max < k) max = k;
        }
        return max;
    }
};