// Maximium count of positive integers and negative integers
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int k = 0, m = 0;
        for(int i = 0; i < nums.size(); i ++) {
            if(nums[i] < 0) {
                k ++;
            }
            else if(nums[i] > 0) {
                m ++;
            }
        }
        return max(k, m);
    }
};