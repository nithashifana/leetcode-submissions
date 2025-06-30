// Min Cost Climbing Stairs
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        for(int i = cost.size() - 3; i >= 0; i --) {
            cost[i] += min(cost[i + 2], cost[i + 1]);
        }
        return min(cost[0], cost[1]);
    }
};