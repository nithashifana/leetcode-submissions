// Base 7
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        int sign = num < 0 ? -1 : 1;
        num = abs(num);
        string res = "";
        while(num) {
            res = to_string(num % 7) + res;
            num /= 7;
        }
        return sign == -1 ? "-" + res : res;
    }
};