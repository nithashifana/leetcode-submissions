// Find most frequent vowel and consonant
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vowel;
        unordered_map<char, int> cons;
        for(int i = 0; i < s.size(); i ++) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') vowel[s[i]] ++;
            else cons[s[i]] ++;
        }
        int max1 = 0, max2 = 0;
        for (auto it = vowel.begin(); it != vowel.end(); ++it) {
            if (max1 == 0 || it->second > vowel[max1]) {
                max1 = it->first;
            }
        }

        for (auto it = cons.begin(); it != cons.end(); ++it) {
            if (max2 == 0 || it->second > cons[max2]) {
                max2 = it->first;
            }
        }
        return vowel[max1] + cons[max2];
    }
};