// Count symmetric integers
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int k = 0;
        for(int i = low; i <= high; i ++) {
            int sum = 0, d = 0, s = 0;
            int j = i;
            while(j) {
                d ++;
                sum += j % 10;
                j /= 10;
            }
            if(d % 2) continue;
            j = i;
            int m = 0;
            while(m < d/2) {
                s += j % 10;
                j /= 10;
                m ++;
            }
            if(s == sum - s) k ++;
        }
        return k;
    }
};