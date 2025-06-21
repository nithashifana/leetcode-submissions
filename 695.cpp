// Max area of island
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int dfs(vector<vector<int>>& grid, int i, int j) {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] != 1) {
            return 0;
        }
        grid[i][j] = -1;
        return 1 + dfs(grid, i, j + 1)
                 + dfs(grid, i + 1, j)
                 + dfs(grid, i - 1, j)
                 + dfs(grid, i, j - 1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxi = 0;
        for(int i = 0; i < grid.size(); i ++) {
            for(int j = 0; j < grid[0].size(); j ++) {
                if(grid[i][j] == 1) {
                    maxi = max(maxi, dfs(grid, i, j));
                }
            }
        }
        return maxi;
    }
};