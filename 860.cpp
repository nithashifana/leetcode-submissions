// Lemonade Change
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int i = 0, j = 0, k = 0;
        for(int l = 0; l < bills.size(); l ++) {
            if(bills[l] == 5) i ++;
            else if(bills[l] == 10) {
                j ++;
                if(i > 0) i --;
                else return false;
            }
            else {
                k ++;
                if(j > 0 && i > 0) {
                    j --;
                    i --;
                } else if(i >= 3) {
                    i -= 3;
                }
                else return false;
            }
        }
        return true;
    }
};