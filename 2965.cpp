// Finding missing and repeated values
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int size = n * n;
        vector<int> freq(size + 1, 0);
        int a = -1, b = -1;

        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid.size(); j++) {
                freq[grid[i][j]]++;
            }
        }

        for (int num = 1; num <= size; num++) {
            if (freq[num] == 2)
                a = num;
            if (freq[num] == 0)
                b = num;
        }

        return {a, b};
    }
};