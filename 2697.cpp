// Lexicographically Smallest Palindrome
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int l = 0, r = s.size()-1;
        while(l < r) {
            char mini = min(s[l], s[r]);
            s[l ++] = mini;
            s[r --] = mini;
        }
        return s;
    }
};