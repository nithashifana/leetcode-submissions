// Majority element II 
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr;

        if (n == 0) return arr;
        if (n == 1) {
            arr.push_back(nums[0]);
            return arr;
        }

        sort(nums.begin(), nums.end());
        int count = 1;

        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                count++;
            } else {
                if (count > n / 3) {
                    arr.push_back(nums[i - 1]);
                }
                count = 1;
            }
        }
        if (count > n / 3) {
            arr.push_back(nums[n - 1]);
        }

        return arr;
    }
};

