// Minimum cost to move chips to the same position
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int cost = 0;
        for(int i = 0; i < position.size(); i ++) {
            position[i] %= 2;
            if(position[i]) cost ++;
        }
        return cost > position.size() - cost ? position.size() - cost : cost;
    }
};