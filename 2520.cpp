// Count the digits that divide a number
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int temp = num, k = 0;
        while(temp) {
            int rem = temp%10;
            if(num%rem == 0) k ++;
            temp /= 10;
        }
        return k;
    }
};