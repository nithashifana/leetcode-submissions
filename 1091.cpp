// Shortest Path in Binary Matri
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        if(grid[0][0] != 0 || grid[n-1][n-1] != 0) return -1;
        vector<pair<int, int>> directions = {
            {-1, -1}, {-1, 0}, {-1, 1},
            {0, -1},           {0, 1},
            {1, -1}, {1, 0}, {1, 1}};
        queue<pair<int, int>> q;
        q.push({0, 0});
        grid[0][0] = 1;
        while(!q.empty()) {
            auto [x, y] = q.front();
            q.pop();
            int dist = grid[x][y];
            if(x == n - 1 && y == n - 1) return dist;
            for (auto& [dx, dy] : directions) {
                int nx = x + dx;
                int ny = y + dy;

                if (nx >= 0 && ny >= 0 && nx < n && ny < n && grid[nx][ny] == 0) {
                    q.push({nx, ny});
                    grid[nx][ny] = dist + 1;
                }
            }
        }
        return -1;
    }
};