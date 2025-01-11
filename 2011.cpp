// Final value of variables after performing operations
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0; i < operations.size(); i ++) {
            if(operations[i][1] == '-') {
                --x;
            }
            else ++x;
        }
        return x;
    }
};