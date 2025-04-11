// Special array I
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        if(nums.size() == 1) return true;
        for(int i = 0; i < nums.size()-1; i ++) {
            if(abs(nums[i] - nums[i+1]) % 2 == 0) {
                return false;
            }
        }
        return true;
    }
};