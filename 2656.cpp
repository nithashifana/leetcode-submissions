// Maximum Sum With Exactly K Elements 
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int maxi = nums[0], sum = 0;
        for(int i = 0; i < nums.size(); i ++) {
            maxi = max(maxi, nums[i]);
        }
        for(int i = maxi; i < maxi + k; i ++) {
            sum += i;
        }
        return sum;
    }
};