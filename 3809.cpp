// Best Reachable Tower
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int> arr;
        sort(towers.begin(), towers.end());
        for(int i = 0; i < towers.size(); i ++) {
            if(abs(towers[i][0] - center[0]) + abs(towers[i][1] - center[1]) <= radius) 
                arr.push_back(i);
        }
        int maxi = -1;
        vector<int> res = {-1, -1};
        for(int i = 0; i < arr.size(); i ++) {
            int maxx = maxi;
            maxi = max(maxi, towers[arr[i]][2]);
            if(maxi != maxx) res = {towers[arr[i]][0], towers[arr[i]][1]};
        }
        return res;
    }
};