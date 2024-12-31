// Find minimum operation to make all elements divisible by thtree
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for(int i = 0; i < n; i ++) {
            if(nums[i] % 3 != 0) {
                k ++;
            }
        }
        return k;
    }
};