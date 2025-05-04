// Maximum product of two digits
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while(n) {
            arr.push_back(n%10);
            n /= 10;
        }
        int max = 0;
        for(int i = 0; i < arr.size(); i ++) {
            if(arr[max] < arr[i]) {
                max = i;
            }
        }
        int m;
        if(max == 0) m = 1;
        else m = 0;
        for(int i = 0; i < arr.size(); i ++) {
            if(arr[m] < arr[i] && i != max) {
                m = i;
            }
        }
        return arr[m]*arr[max];
    }
};