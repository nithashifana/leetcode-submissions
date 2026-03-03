// Find Kth Bit in Nth Binary String
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        for (int i = 1; i < n; i++) {
            string s1 = "";
            for (int j = 0; j < s.size(); j++) {
                s1 += s[j] ^ 1;
            }
            reverse(s1.begin(), s1.end());
            s = s + "1" + s1;
        }
        return s[k - 1];
    }
};