// First Element with Unique Frequency
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freq;
        for (auto& x : nums) {
            freq[x]++;
        }
        unordered_map<int, int> freqCount;
        for (auto& p : freq) {
            freqCount[p.second]++;
        }
        for (auto& x : nums) {
            if (freqCount[freq[x]] == 1)
                return x;
        }
        return -1;
    }
};