// Maximum Points You Can Obtain from Cards
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int leftSum = 0, rightSum = 0;
        int i;
        for(i = 0; i < k; i ++) {
            leftSum += cardPoints[i];
        }
        int res = leftSum;
        for(int i = 1; i <= k; i ++) {
            leftSum -= cardPoints[k - i];
            rightSum += cardPoints[cardPoints.size() - i];
            res = max(res, leftSum + rightSum);
        }
        return res;
    }
};