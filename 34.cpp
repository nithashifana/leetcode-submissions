// find first and last position of element in sorted array
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0; 
        int h = n - 1;
        int left = -1;
        int right = -1;
        
        while(l <= h) {
            int mid = (l + h)/2;
            if(nums[mid] == target) {
                left = mid;
                h = mid - 1;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
        l = 0; 
        h = n - 1;
        
        while(l <= h) {
            int mid = l + (h - l)/2;
            if(nums[mid] == target) {
                right = mid;
                l = mid + 1;
            } else if (nums[mid] < target) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
    return {left, right};
    }
};