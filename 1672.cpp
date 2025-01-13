// Richest customer wealth
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for(int i = 0; i < accounts.size(); i ++) {
            int max1 = 0;
            for(int j = 0; j < accounts[0].size(); j ++) {
                max1 += accounts[i][j];
            }
            if(max1 > max) {
                max = max1;
            }
        }
        return max;
    }
};