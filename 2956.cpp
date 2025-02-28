// Find common elements between two arrays
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int k = 0, l = 0;
        vector<int> arr(2, 0);
        for(int i = 0; i < nums1.size(); i ++) {
            for(int j = 0; j < nums2.size(); j ++) {
                if(nums1[i] == nums2[j]) {
                    k ++;
                    break;
                }
            }
        }
        arr[0]=k;
        for(int i = 0; i < nums2.size(); i ++) {
            for(int j = 0; j < nums1.size(); j ++) {
                if(nums2[i] == nums1[j]) {
                    l ++;
                    break;
                }
            }
        }
        arr[1] = l;
        return arr;
    }
};