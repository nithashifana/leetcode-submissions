// Find N unique integers sum up to zero
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr;
        if(n % 2)
        arr.push_back(0);
        for(int i = 1; i <= n/2; i ++) {
            arr.push_back(i);
            arr.push_back(i * -1);
        }
        return arr;
    }
};