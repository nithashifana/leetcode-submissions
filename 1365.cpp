// How many numbers are smaller than the current number
// Easy

#include <bits/stdc++.h> 
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> res;
        
        for(int i  = 0 ; i < nums.size(); i ++) {
            int k = 0;
            for(int j = 0; j < nums.size(); j ++) {
                if(nums[j] < nums[i] && j != i) {
                    k ++;
                }
            }
            res.push_back(k);
        }
        return res;
    }
};