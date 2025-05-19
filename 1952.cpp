// Three divisors
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isThree(int n) {
        int k = 0;
        for(int i = 2; i <= n/2; i ++) {
            if(n % i == 0) {
                k ++;
            }
        }
        return k == 1;
    }
};