// Find the K-th Character in String Game I
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while(k > s.length()) {
            string next = "";
            for(char c : s) {
                next += (c == 'z') ? 'a' : c + 1;
            }
            s += next;
        }
        return s[k - 1];
    }
};