// Determine whether matrix can be obtained by rotation
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int same(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = target.size();
        for(int i = 0; i < n; i ++) {
            for(int j = 0; j < n; j ++) {
                if(mat[i][j] != target[i][j]) {
                    return 0;
                }
            }
        }
        return 1;
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = target.size();
        int k = 0;
        if(same(mat, target)) {
            return true;
        }
        while(1) {
            for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                int a = target[i][j];
                target[i][j] = target[i][n - 1 - j];
                target[i][n - 1 - j] = a;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++) {
                int a = target[i][j];
                target[i][j] = target[n-j-1][n-i-1];
                target[n-j-1][n-i-1] = a;
            }
        }
        k ++;
        if(same(mat, target)) {
            return true;
        }
        if(k > 4) {
            return false;
        }
        else continue;
        }
    }
};