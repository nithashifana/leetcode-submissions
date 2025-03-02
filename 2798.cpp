// Number of employees who met the target
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int k = 0;
        for(int i = 0; i < hours.size(); i ++) {
            if(hours[i] >= target) {
                k ++;
            }
        }
        return k;
    }
};