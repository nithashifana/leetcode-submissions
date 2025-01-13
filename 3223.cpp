// Minimum length od=f string after operations
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        vector<int> arr(26, 0);
        int len = 0;
        for(int i = 0; i < s.size(); i ++) {
            arr[s[i] - 'a'] ++;
        }

        for(int i = 0; i < 26; i ++) {
            if(arr[i] == 0) continue;
            len += (arr[i] % 2 == 0)? 2 : 1;
        }
        return len;
    }
};