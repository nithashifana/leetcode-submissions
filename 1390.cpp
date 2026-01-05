// Four Divisors
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i ++) {
            vector<int> arr;
            int s = 0;
            for(int j = 1; j*j <= nums[i]; j ++) {
                if(nums[i] % j == 0)  {
                    arr.push_back(j);
                    s += j;
                    if(j * j != nums[i]) {
                        arr.push_back(nums[i] / j);
                        s += nums[i] / j;
                    }
                }
                if(arr.size() > 4) break;
            }
            if(arr.size() == 4) sum += s;
        }
        return sum;
    }
};