// Anumber after a double reversal
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num == 0) return true;
        if(num%10 == 0) return false;
        return true;
    }
};