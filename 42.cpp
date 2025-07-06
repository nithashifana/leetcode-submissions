// Trapping Rain Water
// Hard

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty())
            return 0;
        int l = 0, r = height.size() - 1;
        int lMax = height[l], rMax = height[r];
        int res = 0;

        while (l < r) {
            if (lMax < rMax) {
                l++;
                lMax = max(lMax, height[l]);
                res += lMax - height[l];
            } else {
                r--;
                rMax = max(rMax, height[r]);
                res += rMax - height[r];
            }
        }
        return res;
    }
};

/*
int trap(vector<int>& height) {
        vector<int> maxL(height.size(), 0);
        vector<int> maxR(height.size(), 0);
        int a = 0;
        for(int i = 0; i < height.size() - 1; i ++) {
            a = max(a, height[i]);
            maxL[i + 1] = a;
        }
        a = 0;
        for(int i = height.size() - 1; i > 0; i --) {
            a = max(a, height[i]);
            maxR[i - 1] = a;
        }
        int sum = 0;
        for(int i = 0; i < height.size(); i ++) {
            a = min(maxL[i], maxR[i]) - height[i];
            if(a > 0)
                sum += a;
        }
        return sum;
    }
*/