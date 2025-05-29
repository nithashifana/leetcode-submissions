// Partitioning Into Minimum Number Of Deci-Binary Numbers
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
        int maxi = n[0] - '0';
        for(int i = 1; i < n.size(); i ++) {
            if(n[i] - '0' > maxi) maxi = n[i] - '0';
        }
        return maxi;
    }
};