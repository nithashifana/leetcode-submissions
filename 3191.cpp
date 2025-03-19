// Minimum operation to make binary elements equal to one I
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums) {
        int k = 0;
        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] == 0) {
                k++;
                for (int j = 0; j < 3; j++) {
                    nums[i + j] = 1 - nums[i + j];
                }
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                return -1;
            }
        }
        return k;
    }
};
