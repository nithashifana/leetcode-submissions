// Intersection of two arrays II
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> hash(1001, 0);
        vector<int> arr;
        for (int i = 0; i < nums1.size(); i++) {
            hash[nums1[i]]++;
        }
        for (int i = 0; i < nums2.size(); i++) {
            if(hash[nums2[i]]) {
                hash[nums2[i]] --;
                arr.push_back(nums2[i]);
            }
        }
        return arr;
    }
};