// Diff btw element sum and digit sum of an array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int x = 0, y = 0;
        for (int i = 0; i < nums.size(); i++) {
            x += nums[i];
            while (nums[i] > 0) {
                y += nums[i] % 10;
                nums[i] = nums[i] / 10;
            }
        }
        return abs(x - y);
    }
};