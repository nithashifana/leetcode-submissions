// Find greatest common divisor of array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = 1001;
        int max = 0;
        for(int i = 0; i < nums.size(); i ++) {
            if(min > nums[i]) {
                min = nums[i];
            }
        }
        for(int i = 0; i < nums.size(); i ++) {
            if(max < nums[i]) {
                max = nums[i];
            }
        }
        for(int i = min; i >= 1; i --) {
            if(max%i == 0 && min%i == 0) return i;
        }
        return 1;
    }
};