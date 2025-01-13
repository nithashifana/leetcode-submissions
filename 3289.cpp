// The two sneaky numbers of digitville
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> arr;
        for(int i = 0; i < nums.size() -1 ; i ++) {
            if(nums[i] == nums[i + 1]) {
                arr.push_back(nums[i]);
            }
        }
        return arr;
    }
};