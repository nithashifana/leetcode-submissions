// Relative ranks
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        for(int i = 0; i < score.size(); i ++) {
            score[i] = score[i]*10000 + i;
        }
        vector<string> s(score.size());
        vector<string> s1 = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        sort(score.begin(), score.end());
        int rank = 1;
        for (int i = score.size() - 1; i >= 0; i--, rank++) {
            int index = score[i] % 10000;
            if (rank <= 3) {
                s[index] = s1[rank - 1];
            } else {
                s[index] = to_string(rank);
            }
        }
        return s;
    }
};