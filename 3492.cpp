// Maximum containers on a ship
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        return min(maxWeight / w, n*n);
    }
};