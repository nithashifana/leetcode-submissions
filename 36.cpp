// Valid Sudoku
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for(int r = 0; r < 9; r ++) {
            for(int c = 0; c < 9; c ++) {
                char val = board[r][c];
                if(val == '.') continue;
                string rowKey = "row" + to_string(r) + val;
                string colKey = "col" + to_string(c) + val;
                string boxKey = "box" + to_string(r/3) + to_string(c/3) + val;
                if(!seen.insert(rowKey).second ||
                   !seen.insert(colKey).second ||
                   !seen.insert(boxKey).second) {
                    return false;
                }
            }
        }
        return true;
    }
};