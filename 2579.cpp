// Count total number of coloured cells
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long coloredCells(int n) {
        long long k = 1;
        
        for(int i = 1; i < n; i ++) {
            k += 4*1;
        }
        return k;
    }
};