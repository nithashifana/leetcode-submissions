// Longest Balanced Substring I
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestBalanced(string s) {
        int n = s.size();
        int res = 0;
        for(int i = 0; i < n; i ++) {
            vector<int> f(26, 0);
            for(int j = i; j < n; j ++) {
                f[s[j] - 'a'] ++;
                int val = 0;
                bool ok = true;
                for(int x : f) {
                    if(x) {
                        if(!val) val = x;
                        else if(x != val) ok = false;
                    }
                }
                if(ok) res = max(res, j - i + 1);
            }
        }
        return res;
    }
};