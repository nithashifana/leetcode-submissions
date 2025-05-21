// Count integers with even digit sum
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countEven(int num) {
        int sum, k = 0;
        for (int i = 1; i <= num; i++) {
            sum = 0;
            int num1 = i;
            while (num1) {
                sum += num1 % 10;
                num1 /= 10;
            }
            if (sum % 2 == 0)
                k++;
        }
        return k;
    }
};