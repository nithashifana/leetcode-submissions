// Find the number of good pairs
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        int m = nums2.size();
        int l = 0;
        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < m; j ++) {
                if(nums1[i]%(nums2[j]*k) == 0) {
                    l ++;
                }
            }
        }
        return l;
    }
};