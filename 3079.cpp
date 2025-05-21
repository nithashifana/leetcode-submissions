// Find the sum of encrypted integers
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i ++) {
            int k = 0;
            int max = 0;
            while(nums[i]) {
                k *= 10;
                k += 1;
                max = max < nums[i] % 10? nums[i] % 10 : max;
                nums[i] /= 10;
            }
            nums[i] = max * k;
        }
        int max = 0;
        for(int i = 0; i < nums.size(); i ++) {
            max += nums[i];
        }
        return max;
    }
};