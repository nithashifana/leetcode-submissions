// Count operations to obtain zer
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOperations(int num1, int num2) {
        int k = 0;
        while(num1 && num2) {
            if(num1 >= num2) num1 -= num2;
            else num2 -= num1;
            k ++;
        }
        return k;
    }
};