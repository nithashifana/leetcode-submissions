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

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIndex = 0;
        for(int i = 0; i < nums.size(); i ++) {
            if(i > maxIndex) return false;
            maxIndex = max(maxIndex, i + nums[i]);
            if(maxIndex > nums.size()) return true;
        }
        return true;
    }
};