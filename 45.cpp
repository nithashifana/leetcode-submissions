// Jump Game II
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int l = 0, r  = 0;
        int jump  = 0;
        while(r < nums.size() - 1) {
            int farthest = 0;
            for(int i = l; i <= r; i ++) {
                farthest = max(farthest, i + nums[i]);
            }
            l = r + 1;
            r = farthest;
            jump ++;
        }
        return jump;
    }
};