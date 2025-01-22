// Intersection of two arrays
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> hash(1001, 0);
        vector<int> arr;
        for(int i = 0; i < nums1.size(); i ++) {
            hash[nums1[i]] = 1;
        }
        for(int i = 0; i < nums2.size(); i ++) {
                if(hash[nums2[i]])
                hash[nums2[i]] = 2;
        }
        for(int i = 0; i <= 1000; i ++) {
            if(hash[i] > 1) {
                arr.push_back(i);
            }
        }
        return arr;
    }
};