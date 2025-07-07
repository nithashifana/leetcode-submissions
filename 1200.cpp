// Minimum Absolute Difference
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minDiff = INT_MAX;
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        for(int i = 1; i < arr.size(); i ++) {
            minDiff = min(minDiff, arr[i] - arr[i - 1]);
        }
        for(int i = 1; i < arr.size(); i ++) {
            if(arr[i] - arr[i - 1] == minDiff) {
                res.push_back({arr[i - 1], arr[i]});
            }
        }
        return res;
    }
};