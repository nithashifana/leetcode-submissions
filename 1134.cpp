// Armstrong number
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int k = 0, sum = 0;
        int t = n;
        while(t) {
            int rem = t%10;
            k ++;
            t /= 10;
        }
        t = n;
        while(t) {
            int rem = t%10;
            sum += pow(rem, k);
            t /= 10;
        }
        return sum == n;
    }
};