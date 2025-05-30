// Minimum Time to Type Word Using Special Typewriter
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minTimeToType(string word) {
        int sum = 0;
        char prev = 'a';
        for(int i = 0; i < word.size(); i ++) {
            char cur = word[i];
            int dist = abs(cur - prev);
            sum ++;
            sum += min(dist, 26 - dist);
            prev = cur;
        }
        return sum;
    }
};