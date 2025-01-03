// Number of ways to split array
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long sum = 0;
        for (int i = 0; i < n; i ++) {
            sum += nums[i];
        }
        int res = 0;
        int k = 1;
        long long sum1 = 0;
        for(int i = 0; i < k && k <= n-1; i ++) {
            sum1 = sum1 + nums[i];
            printf("%d %d \n", sum1, sum-sum1);
            if(sum1 >= sum - sum1) {
                res ++;
            }
            k ++;
        }
        return res;
    }
};