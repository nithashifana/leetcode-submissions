// Maximum score after splitting a string
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(string s) {
        int j = 1;
        int i = 0;
        int n = s.size();
        int max1 = 0;
        int max = 0;
        while (j < n) {
            int zero = 0;
            int one = 0;
            for (i = 0; i < j; i ++) {
                if (s[i] == '0') {
                    zero++;
                }
            }
            for (int k = j; k < n; k++) {
                if (s[k] == '1') {
                    one++;
                }
            }
            max = zero + one;
            j++;
            if (max > max1) {
                max1 = max;
            }
        }
        return max1;
    }
};