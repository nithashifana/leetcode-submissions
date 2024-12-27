// House robber
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;
        if (n == 1) return nums[0];

        int a1 = max(nums[0], nums[1]);
        int a2 = nums[0];
        
        for (int i = 2; i < n; i++) {
            int curr = max(a1, a2 + nums[i]);
            a2 = a1;
            a1 = curr;
        }
        return a1;
    }
};
