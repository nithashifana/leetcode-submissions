// Split Array by Prime Indices©leetcode
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if(n < 2) return false;
        for(int i = 2; i * i <= n; i ++) {
            if(n % i == 0) return false;
        }
        return true;
    }
    long long splitArray(vector<int>& nums) {
        vector<int> A;
        vector<int> B;
        for(int i = 0; i < nums.size(); i ++) {
            if(isPrime(i)) {
                A.push_back(nums[i]);
            } else B.push_back(nums[i]);
        }
        long long s1 = 0, s2 = 0;
        for(int i = 0; i < A.size(); i ++) {
            s1 += A[i];
        }
        for(int i = 0; i < B.size(); i ++) {
            s2 += B[i];
        }
        return abs(s1 - s2);
    }
};