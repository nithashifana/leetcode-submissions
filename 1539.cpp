// kth missing positive number
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int a = 1;
        int i = 0;
        int kk = 0;
        while(1) {
            if(i < arr.size() && a == arr[i]) i ++;
            else {
                kk ++;
                if(kk == k) return a;
            }
            a ++;
        }
    }
};