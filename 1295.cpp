// Find numbers with even number of digits
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int m = 0, k;
        for(int i = 0; i < nums.size(); i ++) {
            k = 0;
            while(nums[i] != 0) {
                nums[i] /= 10;
                k ++;
            } 
            if(k % 2 == 0)
            m ++;
        }
        return m;
    }
};