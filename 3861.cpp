// Minimum Capacity Box
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int res = -1;
        for(int i = 0; i < capacity.size(); i ++) {
            if(capacity[i] >= itemSize) {
                if(res == -1 || capacity[res] > capacity[i]) {
                    res = i;
                }
            } 
        }
        return res;
    }
};