// Check if Any Element Has Prime Frequency
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if(n < 2) return false;
        for(int i = 2; i <= n/2; i ++) {
            if(n % i == 0)  return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int a:nums) {
            mp[a] ++;
        }
        for(auto& [num, freq]:mp) {
            if(isPrime(freq)) return true;
        }
        return false;
    }
};