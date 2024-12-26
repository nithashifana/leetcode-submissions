// Jewels and stones
// Easy

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jwels, string stones) {
        int n = jwels.size();
        int m = stones.size();
        int k = 0;
        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < m; j ++) {
                if(jwels[i] == stones[j]) {
                    k ++;
                }
            }
        }
        return k;
    }
};