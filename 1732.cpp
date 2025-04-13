// Find the highest altitude
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> arr(gain.size()+1, 0);
        for(int i = 0; i < gain.size(); i ++) {
            arr[i+1] = gain[i] + arr[i];
        }
        int max = 0;
        for(int i = 0; i < arr.size(); i ++) {
            if (max < arr[i]) {
                max = arr[i];
            }
        }
        return max;
    }
};