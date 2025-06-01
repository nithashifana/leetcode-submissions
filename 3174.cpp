// Clear Digits
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        for(int i = 0; i < s.size(); i ++) {
            if(isdigit(s[i])) {
                s.erase(s.begin() + i - 1, s.begin() + i + 1);
                i -= 2;
            }
        }
        return s;
    }
};