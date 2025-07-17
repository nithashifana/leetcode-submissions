// Median of Two Sorted Arrays
// Hard

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        vector<int> num;
        while(i < nums1.size() && j < nums2.size()) {
            if(nums1[i] < nums2[j]) {
                num.push_back(nums1[i ++]);
            } else {
                num.push_back(nums2[j ++]);
            }
        }
        while(i < nums1.size()) {
            num.push_back(nums1[i ++]);
        }
        while(j < nums2.size()) {
            num.push_back(nums2[j ++]);
        }
        if(num.size() % 2) {
            return num[num.size() / 2];
        } else return (num[num.size()/2] + num[num.size()/2 - 1])/2.0;
    }
};