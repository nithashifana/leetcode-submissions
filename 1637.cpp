// Widest Vertical Area Between Two Points Containing No Points
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int d = 0;
        for(int i = 1; i < points.size(); i ++) {
            d = max(d, points[i][0] - points[i - 1][0]);
        }
        return d;
    }
};