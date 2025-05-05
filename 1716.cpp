// Calculate money in leetcode bank
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalMoney(int n) {
        int s1;
        if(n <= 7) return n*(n+1)/2;
        else {
            // n/2(2a+(n-1)d)
            int m = n/7;
            s1 = (m*(2*28 + (m-1)*7))/2;
            for(int i = m + 1; i < m + n%7 + 1; i ++) {
                s1 += i;
            }
        }
        return s1;
    }
};