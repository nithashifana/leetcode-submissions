// Maximum subarray with equal products
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int max_len = 0;

        for (int i = 0; i < n; ++i) {
            long long prod = 1;
            int g = nums[i];
            int l = nums[i];

            for (int j = i; j < n; ++j) {
                if (prod > LLONG_MAX / nums[j]) {
                    break;
                }
                prod *= nums[j];
                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);

                if (prod == g * l) {
                    max_len = max(max_len, j - i + 1);
                }
            }
        }

        return max_len;
    }
};