// Find Lucky Integer in an Array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> mpp;
        for(int num : arr) {
            mpp[num] ++;
        }
        int a = -1;
        int res = -1;
        for(auto& [m, n] : mpp) {
            if(m == n) {
                a = m;
                res = max(res, a);
            }
        }
        return res;
    }
};