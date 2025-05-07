// Contains Duplicate II
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i ++) {
            int n = nums[i];
            if(mpp.find(n) != mpp.end() && i-mpp[n] <= k) return true;
            mpp[n] = i;
        }
        return false;
    }
};