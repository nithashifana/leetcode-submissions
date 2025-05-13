// Number of common factors
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int commonFactors(int a, int b) {
        int k = 0;
        int mini = min(a, b);
        for(int i = 1; i <= mini; i ++) {
            if(a % i == 0 && b % i == 0) k ++;
        }
        return k;
    }
};