// Harshad number
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int y = x;
        while(x) {
            sum += x % 10;
            x /= 10;
        }
        if(y % sum == 0) return sum;
        else return -1;
    }
};