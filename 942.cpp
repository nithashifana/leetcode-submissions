// DI string match
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int k = 0;
        int n = s.size();
        vector<int> nums(n + 1);
        for(int i = 0; i < n; i ++) {
            if(s[i] == 'I') {
                nums[i] = k;
                k ++;
            }
        }
        nums[n] = k;
        k ++;
        for(int i = n-1; i >= 0; i --) {
            if(s[i] == 'D') {
                nums[i] = k;
                k ++;
            }
        }
        return nums;
    }
};