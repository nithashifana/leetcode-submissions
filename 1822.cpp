// Sign of the product of an array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int m = 0;
        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] == 0) return 0;
            if(nums[i] < 0) m ++;
        }
        if(m % 2) return -1;
        return 1;
    }
};