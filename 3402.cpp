// Minimum operation to make colums strictly increasing
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int k = 0;
        for(int i = 1; i < n; i ++) {
            for(int j = 0; j < m; j ++) {
                int p = grid[i][j];
                if(grid[i-1][j] >= p) {
                    grid[i][j] = grid[i - 1][j] + 1;
                    k += grid[i][j] - p;
                }
            }
        }
        return k;
    }
};