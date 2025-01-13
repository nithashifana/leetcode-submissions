// Count the number of consistent strings
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int k;
        int m = 0;
        for (int i = 0; i < words.size(); i++) {
            k = 0;
            for (int j = 0; j < words[i].size(); j++) {
                if (allowed.find(words[i][j]) == -1) {
                    k = -1;
                    break;
                }
            }
            if (k != -1) {
                m++;
            }
        }
        return m;
    }
};
