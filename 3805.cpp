// Count Caesar Cipher Pairs
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countPairs(vector<string>& words) {
        for(int i = 0; i < words.size(); i ++) {
            if(words[i][0] != 'a') {
                int n = words[i][0] - 'a';
                for(int j = 0; j < words[i].size(); j ++) {
                    int x = (words[i][j] - 'a' - n + 26) % 26;
                    words[i][j] = char('a' + x);
                    /*
                    words[i][j] - 'a'     = 0
                    0 - 5                 = -5
                    -5 + 26               = 21
                    21 % 26               = 21
                    'a' + 21              = 'v'
                    */
                }
            }
        }
        unordered_map<string, long long> mp;
        long long ans = 0;
        for(int i = 0; i < words.size(); i ++) {
            mp[words[i]] ++;
        }
        for(auto &p : mp) {
            long long k = p.second;
            ans += k * (k - 1) / 2;
        }
        // If there are k identical items, the number of unique pairs is:
        // C(k, 2) = k choose 2 = k * (k - 1) / 2
        return ans;
    }
};