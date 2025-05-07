// Happy Number
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && seen.find(n) == seen.end()) {
            seen.insert(n);
            int sum = 0;
            while (n) {
                int rem = n % 10;
                sum += rem * rem;
                n /= 10;
            }
            n = sum;
        }
        return n == 1;
    }
};