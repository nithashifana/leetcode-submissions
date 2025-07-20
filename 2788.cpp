// Split Strings by Separator
// Easy

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> res;
        for(int i = 0 ; i < words.size(); i ++) {
            string s = "";
                for(int j = 0; j < words[i].size(); j ++) {
                    if(words[i][j] != separator) {
                        s += words[i][j];
                    } else {
                        if (!s.empty()) {
                        res.push_back(s);
                        s = "";
                        }
                    }
            }
            if (!s.empty()) res.push_back(s);
        }
        return res;
    }
};