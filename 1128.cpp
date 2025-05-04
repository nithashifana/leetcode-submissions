// Number of equivalent domino pais
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> count;
        int k = 0;
        for(int i = 0; i < dominoes.size(); i ++) {
            int a = dominoes[i][0];
            int b = dominoes[i][1];
            int key = (a < b) ? (a * 10 + b) : (b * 10 + a);
            k += count[key];
            count[key] ++;
        }
        return k;
    }
};
