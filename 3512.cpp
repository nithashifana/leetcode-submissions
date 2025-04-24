// Minimum operations to make array sum divisible by k
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i ++) {
            sum += nums[i];
        }
        return sum % k;
    }
};