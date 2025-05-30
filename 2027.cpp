// Minimum Moves to Convert String
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumMoves(string s) {
        int moves = 0, i = 0;
        while(i < s.size()) {
            if(s[i] == 'X') {
                moves ++;
                i += 3;
            }
            else i ++;
        }
        return moves;
    }
};