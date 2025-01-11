// Construct K palindrome strings
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        if(n<k) return 0;
        bitset <26> frequency = 0;
        for(char c: s) {
            frequency.flip(c - 'a');
        }
        return frequency.count() <= k;
    }
};