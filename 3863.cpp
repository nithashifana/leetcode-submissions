// Minimum Operations to Sort a String
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(string s) {
        string t = s;
        sort(t.begin(), t.end());
        if (t == s) return 0;
        if (s.size() == 2) return -1;
        if (t[0] == s[0] || t.back() == s.back()) return 1;

        int mn = *min_element(s.begin() + 1, s.end() - 1);
        int mx = *max_element(s.begin() + 1, s.end() - 1);
        if (s[0] > mx && s.back() < mn) return 3;
        
        return 2;
    }
};