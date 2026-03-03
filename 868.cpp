// Binary gap
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binaryGap(int n) {
        string s = "";
        while(n) {
            s += n % 2 + '0';
            n /= 2;
        }
        int res = 0, prev = -1;

        for(int i = 0; i < s.size(); i ++) {
            if(s[i] == '1') {
                if(prev != -1) {
                    res = max(res, i - prev);
                }
                prev = i;
            }
        }
        return res;
    }
};