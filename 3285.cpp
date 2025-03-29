// Find indices of stable mountains
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> arr;
        for(int i = 1; i < height.size(); i ++) {
            if(height[i-1] > threshold) {
                arr.push_back(i);
            }
        }
        return arr;
    }
};