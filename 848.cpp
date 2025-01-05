// Shifting letters I
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n = shifts.size();
        for(int i = n - 2; i >= 0; i --) {
            shifts[i] = (shifts[i] + shifts[i + 1]) % 26; 
        }
        int m = s.size();
        for(int i = 0; i < m; i ++) {
            s[i] = (s[i] - 'a' + shifts[i]) % 26 + 'a';
        }
        return s;
    }
};