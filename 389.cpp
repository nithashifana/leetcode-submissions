// Find the difference
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        char x = 0;
        for(int i = 0; i < t.size(); i ++) {
            x += t[i];
            if(i < (t.size() - 1)) {
                x -= s[i];
            }
        }
        return x;
    }
};