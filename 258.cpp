// Add digits
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while(num) {
            sum += num % 10;
            num /= 10;
        }
        if(sum / 10) return addDigits(sum);
        return sum;
    }
};