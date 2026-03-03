// Minimum Swaps to Arrange a Binary Grid
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> zeros;
        for(int i = 0; i < n; i ++) {
            int k = 0;
            for(int j = n - 1; j >= 0; j --) {
                if(grid[i][j] == 0) k ++;
                else break;
            }
            zeros.push_back(k);
        }

        int swaps = 0;
        for(int i = 0; i < n; i ++) {
            int need = n - i - 1;
            int j = i;
            while(j < n && zeros[j] < need) j ++;
            if(j == n) return -1;
            while(j > i) {
                swap(zeros[j], zeros[j - 1]);
                swaps ++;
                j --;
            }
        }
        return swaps;
    }
};