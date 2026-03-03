// Number of Steps to Reduce a Number in Binary Representation to One
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSteps(string s) {
        int k = 0, carry = 0;
        for(int i = s.size() - 1; i > 0; i --) {
            if((s[i] - '0' + carry) % 2) {
                k += 2;
                carry = 1;
            } else k ++;
        }
        return k + carry;
    }
};