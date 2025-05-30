// Sum of Digits of String After Convert
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        int sum = 0;
        for (char c : s) {
            int val = c - 'a' + 1;
            if (val >= 10) {
                sum += val / 10 + val % 10;
            } else {
                sum += val;
            }
        }
        k --;
        while(k --) {
            int p = 0;
            while(sum) {
                p += sum % 10;
                sum /= 10;
            }
            sum = p;
        }
        return sum;
    }
};