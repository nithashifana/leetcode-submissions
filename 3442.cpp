// Maximum Difference Between Even and Odd Frequency I
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for (char ch : s) {
            mp[ch]++;
        }
        int a = INT_MAX, b = INT_MIN;
        for (auto& [ch, freq] : mp) {
            if (freq % 2 == 0) {
                a = min(a, freq);
            }
            else {
                b = max(b, freq);
            }
        }
        if (a == INT_MAX || b == INT_MIN) return 0;
        return b - a;
    }
};