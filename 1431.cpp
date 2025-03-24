// Kids withgreatest number of candies
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m = 0;
        vector<bool> arr(candies.size(), false);
        for(int i = 0; i < candies.size(); i ++) {
            if(m <= candies[i]) {
                m = candies[i];
            }
        }
        for(int i = 0; i < candies.size(); i ++) {
            if(m <= candies[i]+extraCandies) {
                arr[i] = true;
            }
        }
        return arr;
    }
};