// Smallest number with all set bits
// Easy

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestNumber(int n) {
        int k = 0;
        while(n) {
            k ++;
            n /= 2;
        }
        return pow(2, k) - 1;
    }
};