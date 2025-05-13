// Self dividing numbers
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for(int i = left; i <= right; i ++) {
            int j = i;
            while(j) {
                if (j % 10 == 0) break;
                if(i % (j % 10) != 0) break;
                j /= 10;
            }
            if (j == 0 && i != 0) arr.push_back(i);
        }
        return arr;
    }
};