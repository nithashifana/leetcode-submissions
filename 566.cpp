// Reashape the matrix
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat[0].size() * mat.size() != r*c) return mat;
        vector<vector<int>> m(r, vector<int>(c));
        for(int i = 0; i < mat.size() * mat[0].size(); i ++) {
            m[i / c][i % c] = mat[i / mat[0].size()][i % mat[0].size()];
        }
        return m;
    }
};