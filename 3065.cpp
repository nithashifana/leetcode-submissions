// Minimum operation to exceed threshold value I
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int m = 0;
        if(nums[0] < k) m ++;
        for(int i = 1; i < nums.size(); i ++) {
            if(nums[i] < k) {
                m ++;
            }
        }
        return m;
    }
};