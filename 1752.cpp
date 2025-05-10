// Check if array is sorted and rotated
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int k = 0;
        for(int i = 1; i < nums.size(); i ++) {
            if(nums[i] < nums[i-1]) k ++;
        }  
        if(nums[nums.size()-1] > nums[0]) k ++;
        if(k > 1) return false;
        return true;      
    }
};