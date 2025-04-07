// Count items matching a rule
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey,
                     string ruleValue) {
        int k = 0;
        if (ruleKey == "type") {
            for (int i = 0; i < items.size(); i++) {
                if (items[i][0] == ruleValue) {
                    k++;
                }
            }
        } else if (ruleKey == "color") {
            for (int i = 0; i < items.size(); i++) {
                if (items[i][1] == ruleValue) {
                    k++;
                }
            }
        } else {
            for (int i = 0; i < items.size(); i++) {
                if (items[i][2] == ruleValue) {
                    k++;
                }
            }
        }
        return k;
    }
};