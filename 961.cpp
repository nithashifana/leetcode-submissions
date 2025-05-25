// N-repeated element in size 2N array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i ++) {
            if(mpp[nums[i]]) return nums[i];
            mpp[nums[i]] ++;
        }
        return 0;
    }
};