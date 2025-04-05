// Check if two string arrays are equivalent
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1 = accumulate(word1.begin(), word1.end(), string{});
        string s2 = accumulate(word2.begin(), word2.end(), string{});
        return s1 == s2;
    }
};