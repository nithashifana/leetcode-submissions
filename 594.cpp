// Longest Harmonious subsequence
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int num : nums) {
            freq[num] ++;
        }
        int maxi = 0;
        for(auto& [num, count] : freq) {
            if(freq.count(num + 1)) {
                int l = count + freq[num + 1];
                maxi = max(maxi, l);
            }
        }
        return maxi;
    }
};