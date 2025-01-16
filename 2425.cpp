// Bitwise XOR of all parings
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int k = 0;
        if(nums1.size() % 2 == 1) {
            for(int i = 0; i < nums2.size(); i ++) {
                k = k ^ nums2[i];
            }
        } 
        if(nums2.size() % 2 == 1) {
            for(int i = 0; i < nums1.size(); i ++) {
                k = k ^ nums1[i];
            }
        }
        return k;
    }
};