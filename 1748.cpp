// Sum of unique elements
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int> arr(101, 0);
        int sum = 0;
        for(int i = 0; i < nums.size(); i ++) {
            arr[nums[i]] ++;
        }
        for(int i = 0; i < arr.size(); i ++) {
            if(arr[i] == 1) {
                sum += i;
            }
        }
        return sum;
    }
};