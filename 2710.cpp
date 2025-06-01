// Remove Trailing Zeros From a String
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeTrailingZeros(string num) {
        int k = 0;
        for(int i = num.size() - 1; i >= 0; i --) {
            if(num[i] != '0') break;
            else k ++;
        }
        num.erase(num.size() - k, num.size());
        return num;
    }
};