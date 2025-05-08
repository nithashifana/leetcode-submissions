// Best time to buy and sell stock II
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0;
        for(int i = 0; i < prices.size()-1; i ++) {
            if(prices[i] < prices[i+1]) {
                p += prices[i+1] - prices[i];
            }
        }
        return p;
    }
};