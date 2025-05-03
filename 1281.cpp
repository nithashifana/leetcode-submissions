// Subtract the product and sum of digits of an integer
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int s = 0, p = 1;
        while(n) {
            s += n%10;
            p *= n%10;
            n /= 10;
        }
        return p-s;
    }
};