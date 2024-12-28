// Check balanced string
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isBalanced(string num) {
        int len = num.size();
        int odd = 0;
        int even = 0;
        for(int i = 0; i < len ; i ++) {
            if(i % 2 == 0) {
                even += num[i] - '0';
            }
            else if(i % 2 == 1) {
                odd += num[i] - '0';
            }
        }
        return (odd == even);
    }
};