// Counting bits
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        for(int i = 0; i <= n; i ++) {
            int k = 0;
            int x = i;
            while(x) {
                if(x % 2 == 1) k ++;
                x /= 2;
            }
            arr.push_back(k);
        }
        return arr;
    }
};