// Number of steps to reduce a number to zero
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int k = 0;
        while(num) {
            if(num % 2 == 0) num /= 2;
            else num --;
            k ++;
        }
        return k;
    }
};