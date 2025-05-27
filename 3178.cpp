// Find the Child Who Has the Ball After K Seconds
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfChild(int n, int k) {
        k %= 2*(n-1);
        if(n > k) return k;
        return n-1-(k-n+1);
    }
};

