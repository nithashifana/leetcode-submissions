// Height checher
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> arr(heights.size());
        int k = 0;
        for(int i = 0; i < heights.size(); i ++) {
            arr[i] = heights[i];
        }
        sort(arr.begin(), arr.end());
        for(int i = 0; i < heights.size(); i ++) {
            if(arr[i] != heights[i]) k ++;
        }
        return k;
    }
};