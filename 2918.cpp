// Miniumum equal sum to two arrays after replacing zeros
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long s1 = 0, s2 = 0;
        int z1 = 0, z2 = 0;
        for(int i = 0; i < nums1.size(); i ++) {
            s1 += nums1[i];
            if(nums1[i] == 0) z1 += 1;
        }
        for(int i = 0; i < nums2.size(); i ++) {
            s2 += nums2[i];
            if(nums2[i] == 0) z2 += 1;
        }
        if(z1 == 0 && z2 == 0) return s1 == s2 ? s1 : -1;
        else if(z1 == 0) return s2 + z2 <= s1 ? s1 : -1;
        else if(z2 == 0) return s1 + z1 <= s2 ? s2 : -1;
        return max(s1 + z1, s2 + z2);
    }
};