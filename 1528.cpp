// Shuffle String
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string res = s;
        for(int i = 0; i < s.size(); i ++) {
            res[indices[i]] = s[i];
        }
        return res;
    }
};