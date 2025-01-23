// Convert an array in to a 2D array with conditions
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> hash(201, 0);
        for (int i = 0; i < nums.size(); i++) {
            hash[nums[i]]++;
        }
        int max = 0;;
        for (int i = 0; i < 201; i++) {
            if(hash[i] > max) {
                max = hash[i];
            }
        }
        vector<vector<int>> matrix(max);
        for(int i = 0; i < max; i ++) {
            for(int j = 0; j < 201; j ++) {
                if(hash[j]) {
                    matrix[i].push_back(j);
                    hash[j] --;
                }
            }
        }
        return matrix;
    }
};