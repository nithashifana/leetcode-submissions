// Find closest person
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a = x > z ? x-z : z-x;
        int b = y > z ? y-z : z-y;
        if(a>b) return 2;
        else if(b>a) return 1;
        return 0;
    }
};