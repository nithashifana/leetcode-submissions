// Convert Integer to the Sum of Two No-Zero Integers
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool ok(int k) {
        while(k) {
            if(k%10) k /= 10;
            else return false;
        }
        return true;
    }
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i < n/2; i ++) {
            if(ok(i)&& ok(n - i)) return {i, n - i};
        }
        return {1, n - 1};
    }
};