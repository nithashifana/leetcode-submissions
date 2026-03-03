// Concatenation of Consecutive Binary Numbers
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string to_binary(int k) {
        string s = "";
        while (k) {
            s += (k % 2) + '0';
            k /= 2;
        }
        reverse(s.begin(), s.end());
        return s;
    }

    long long to_decimal(string s) {
        const int MOD = 1e9 + 7;
        long long decimal = 0;
        for (int i = 0; i < s.size(); i ++) {
            decimal = (decimal * 2 + (s[i] - '0')) % MOD;
        }
        return decimal;
    }

    int concatenatedBinary(int n) {
        string s = "";
        for (int i = 1; i <= n; i++) {
            s += to_binary(i);
        }
        return to_decimal(s);
    }
};