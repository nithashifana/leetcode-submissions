// Alternating digit sum
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int alternateDigitSum(int n) {
        string num = to_string(n);
        int sum = 0;
        for(int i = 0; i < num.length(); i ++) {
            int digit = num[i] - '0';
            sum += (i % 2 == 0) ? digit : -digit;
        }
        return sum;
    }
};