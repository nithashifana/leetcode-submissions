// Number of beautiful pairs
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    int getFirstDigit(int num) {
        while (num >= 10) {
            num /= 10;
        }
        return num;
    }
    int countBeautifulPairs(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            int first = getFirstDigit(nums[i]);
            for (int j = i + 1; j < nums.size(); ++j) {
                int last = nums[j] % 10;
                if (gcd(first, last) == 1) {
                    ++count;
                }
            }
        }
        return count;
    }
};