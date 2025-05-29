// Reverse Degree of a String
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i = 0; i < s.size(); i ++) {
            sum = sum + (i + 1) * (26 - s[i] + 'a');
        }
        return sum;
    }
};