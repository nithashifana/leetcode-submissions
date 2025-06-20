// Koko eating bananas
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = *max_element(piles.begin(), piles.end());
        int ans = r;
        while(l <= r) {
            int mid = l + (r - l) / 2;
            long long hours = 0;
            for(int p:piles)
                hours += (1LL * p + mid - 1) / mid;
            if(hours <= h) {
                ans = mid;
                r = mid - 1;
            } else l = mid + 1;
        }
        return ans;
    }
};