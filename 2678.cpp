// Number of senior citizens
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
        int k = 0;
        for(int i = 0; i < details.size(); i ++) {
            int age = (details[i][11] - '0') * 10 + (details[i][12] - '0');
            if(age > 60) {
                k ++;
            }
        }
        return k;
    }
};