// Seperate the digits in an array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> arr;
        for(int i = nums.size()-1; i >= 0; i --) {
            while(nums[i] != 0) {
                arr.push_back(nums[i] % 10);
                nums[i] /= 10;
            }
        }
        vector<int> arr1(arr.size(), 0);
        for(int i = 0; i < arr.size(); i ++) {
            arr1[i] = arr[arr.size() - 1 - i];
        }
        return arr1;
    }
};