// Combination sum
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, target, {}, 0, 0);
        return res;
    }
    void backtrack(vector<int>& candidates, int target, vector<int> cur, int i, int total) {
        if(target == total) {
            res.push_back(cur);
            return;
        }
        for(int j = i; j < candidates.size(); j ++) {
            if(total + candidates[j] > target) break;
            cur.push_back(candidates[j]);
            backtrack(candidates, target, cur, j, total + candidates[j]);
            cur.pop_back();
        }
    }
};