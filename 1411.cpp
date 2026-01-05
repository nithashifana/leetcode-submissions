// Number of Ways to Paint N × 3 Grid
// Hard

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numOfWays(int n) {
        const int MOD = 1e9 + 7;
        long long dpA = 6; // for all different colours 3x2x1
        long long dpB = 6; // for first and thirsd are of same colour 3x2

        for(int i = 2; i <= n; i ++) {
            long long newA = (2 * dpA + 2 * dpB) % MOD;
            long long newB = (2 * dpA + 3 * dpB) % MOD;

            dpA = newA;
            dpB = newB;
        }
        return (dpA + dpB) % MOD;
    }
};