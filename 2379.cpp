// Minimum records to get k consective black blocks
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = 0;
        vector<int> arr;
        for (int j = 0; j < blocks.size() - k + 1; j ++) {
            int n = 0;
            for (int i = j; i < k + j; i++) {
                if (blocks[i] == 'W') {
                    n++;
                }
            }
            arr.push_back(n);
        }
        int min = arr[0];
        for(int i = 1; i < arr.size(); i ++) {
            printf("%d", min);
            if(min > arr[i]) {
                min = arr[i];
            }
        }

        return min;
    }
};