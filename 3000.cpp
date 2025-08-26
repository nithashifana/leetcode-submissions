// Maximum Area of Longest Diagonal Rectangle
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxArea = -1;
        int dio;
        int maxDio = -1;
        for(int i = 0; i < dimensions.size(); i ++) {
            dio = dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1];
            int area = dimensions[i][0] * dimensions[i][1];
            if(maxDio < dio) {
                maxDio = dio;
                maxArea = area;
            } else if(dio == maxDio) maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};