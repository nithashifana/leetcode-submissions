// Unique length-3 palindromic subsequences
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int ans = 0;
        for (char letter = 'a'; letter <= 'z'; letter++) {
            int first = -1, last = -1;
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == letter) {
                    if (first == -1) {
                        first = i;
                    }
                    last = i;
                }
            }
            if (first != -1 && last > first) {
                unordered_set<char> uniqueChars;

                for (int i = first + 1; i < last; i++) {
                    uniqueChars.insert(s[i]);
                }
                ans += uniqueChars.size();
            }
        }
        return ans;
    }
};
