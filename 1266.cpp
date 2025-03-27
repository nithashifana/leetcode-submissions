// Minimum time visiting all points
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int dis = 0;
        for (int i = 1; i < points.size(); i++) {
            int dx = abs(points[i][0] - points[i-1][0]);
            int dy = abs(points[i][1] - points[i-1][1]);
            dis += max(dx, dy);
        }
        return dis;
    }
};