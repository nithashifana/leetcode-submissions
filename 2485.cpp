// Find the pivot integer
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        int sum = 0;
        for(int i = 1; i <= n; i ++) {
            sum += i;
        }
        for(int i = 1; i <= n; i ++) {
            if((i*(i+1))/2 == (sum - (i*(i+1))/2 + i)) return i;
        }
        return -1;
    }
};