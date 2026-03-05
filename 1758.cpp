// Minimum Changes To Make Alternating Binary String
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
        int a = 0, b = 0;
        for(int i = 0; i < s.size(); i++) {
            if((i % 2 == 0 && s[i] != '0') || (i % 2 == 1 && s[i] != '1')) a++; 
            if((i % 2 == 0 && s[i] != '1') || (i % 2 == 1 && s[i] != '0')) b++;
        }
        return min(a, b);
    }
};