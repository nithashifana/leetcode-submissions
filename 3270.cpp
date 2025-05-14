// Find the key of the numbers
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int a = min(num1 / 1000, min(num2 / 1000, num3 / 1000));
        num1 = num1 % 1000;
        num2 = num2 % 1000;
        num3 = num3 % 1000;
        int b = min(num1 / 100, min(num2 / 100, num3 / 100));
        num1 = num1 % 100;
        num2 = num2 % 100;
        num3 = num3 % 100;
        int c = min(num1 / 10, min(num2 / 10, num3 / 10));
        num1 = num1 % 10;
        num2 = num2 % 10;
        num3 = num3 % 10;
        int d = min(num1, min(num2, num3));
        return d + 10*c + 100*b + 1000*a;
    }
};