// Binary Number with Alternating Bits
//Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int x = 5;
        while(n) {
            int rem = n % 2;
            n /= 2;
            if(x == rem) return false;
            x = rem;
        }
        return true;
    }
};