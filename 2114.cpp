// Maximum number of words found in sentences
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max = 0;
        for(int i = 0; i < sentences.size(); i ++) {
            int k = 0;
            for(int j = 0; j < sentences[i].size(); j ++) {
                if(sentences[i][j] == ' ') {
                    k ++;
                }
            }
            if(max < k) {
                max = k;
            }
        }
        return max+1;
    }
};