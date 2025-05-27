// Number of 1 Bits
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int k = 0;
        while(n) {
            if(n % 2 == 1) k ++;
            n /= 2;
        }
        return k;
    }
};