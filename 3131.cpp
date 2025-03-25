// Find the integer added to array 1
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int min = nums1[0];
        int min1 = nums2[0];
        for(int i = 0; i < nums1.size(); i ++) {
            if(min > nums1[i]) {
                min = nums1[i];
            }
        }
        for(int i = 0; i < nums1.size(); i ++) {
            if(min1 > nums2[i]) {
                min1 = nums2[i];
            }
        }
        return min1 - min;
    }
};