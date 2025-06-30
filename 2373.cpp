// Largest Local Values in a Matrix
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> mat(n-2, vector<int>(n - 2, 0));
        for(int i = 0; i <= n - 3; i ++) {
            for(int j = 0; j <= n - 3; j ++) {
                mat[i][j] = maxi(i, j, grid);
            }
        }
        return mat;
    }
    int maxi(int m, int n, vector<vector<int>>& grid) {
        int l = grid[m][n];
        for(int i = m; i < m + 3; i ++) {
            for(int j = n; j < n + 3; j ++) {
                l = max(l, grid[i][j]);
            }
        }
        return l;
    }
};