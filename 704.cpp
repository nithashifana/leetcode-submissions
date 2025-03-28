// Binary search
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, h = nums.size()-1;
        int mid;
        while (l <= h) {
            mid = l + (h-l) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] < target) {
                l = mid + 1;
            } else
                h = mid -1;
        }
        return -1;
    }
};