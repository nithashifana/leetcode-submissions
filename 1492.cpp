// The kth factor of n
// Medium

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthFactor(int n, int k) {
        int m = 0;
        for(int i = 1; i <= n/2; i ++) {
            if(n % i == 0) {
                m ++;
            }
            if(k == m) return i;
        }
        m ++;
        if(k == m) return n;
        return -1;
    }
};