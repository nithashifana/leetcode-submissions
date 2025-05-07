// Jump game
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 0, reach = 0;
        while(i <= reach && i < nums.size()) {
            reach = max(reach, i + nums[i]);
            i ++;
        }
        return reach >= nums.size()-1;
    }
};