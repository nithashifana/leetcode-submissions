// Alternating groups1
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int k = 0;
        for(int i = 1; i < colors.size() - 1; i ++) {
            if(colors[i] != colors[i - 1] && colors[i] != colors[i + 1]) {
                k ++;
            }
        }
        if(colors[0] != colors[1] && colors[0] != colors[colors.size() - 1]) {
            k ++;
        }
        if(colors[0] != colors[colors.size() - 1] && colors[colors.size() - 2] != colors[colors.size() - 1]) {
            k ++;
        }
        return k;
    }
};