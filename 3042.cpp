// Count prefix and suffix pairs I
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int k = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (words[i].size() <= words[j].size() &&
                    words[j].substr(0, words[i].size()) == words[i] &&
                    words[j].substr(words[j].size() - words[i].size()) == words[i]) {
                    k++;
                }
            }
        }
        return k;
    }
};
