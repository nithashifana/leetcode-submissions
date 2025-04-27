// Find first palindromic string in the array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int k = -1;
        for (int i = 0; i < words.size(); i++) {
            bool flag = true;
            for (int j = 0; j < words[i].size() / 2; j++) {
                if (words[i][j] != words[i][words[i].size() - j - 1]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                k = i;
                break;
            }
        }
        if (k == -1) return "";
        return words[k];
    }
};