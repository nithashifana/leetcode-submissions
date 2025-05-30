// Find minimum log transportation cost
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        if (n >= k && m >= k) return 1LL * k * (n - k) + 1LL * k * (m - k);
        else if (n < k && m >= k) return 1LL * k * (m - k);
        else if (n >= k && m < k) return 1LL * k * (n - k);
        return 0;
    }
};