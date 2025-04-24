// Find if digit game can be won
// Easy

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int o = 0, t = 0;
        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] / 10 == 0) {
                o += nums[i];
            }
            else t += nums[i];
        }

        return (o != t);
    }
};