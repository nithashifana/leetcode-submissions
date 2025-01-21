// Plus one
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k = digits.size();
        for(int i = k - 1; i >= 0; i --) {
            if(digits[i] + 1 != 10) {
                digits[i] ++;
                return digits;
            }
            digits[i] = 0;
            if(i == 0) {
                digits.insert(digits.begin(), 1);
                return digits;
            }
        }
        return digits;
    }
};