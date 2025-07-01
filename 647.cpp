// Palindromic substrings
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSubstrings(string s) {
        int res = 0;
        for(int i = 0; i < s.length(); i ++) {
            res += count_palindrome(s, i, i); // odd palindrome
            res += count_palindrome(s, i , i + 1); // even palindrome
        }
        return res;
    }
    int count_palindrome(string s, int left, int right) {
        int count = 0;
        while(left >= 0 && right < s.length() && s[left] == s[right]) {
            count ++;
            left --;
            right ++;
        }
        return count;
    }
};