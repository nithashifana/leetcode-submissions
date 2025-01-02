// Count vowel strings in ranges
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> word(n, 0);
        for (int i = 0; i < n; i++) {
            int m = words[i].size();
            if (words[i][0] == 'a' || words[i][0] == 'e' ||
                words[i][0] == 'i' || words[i][0] == 'o' ||
                words[i][0] == 'u') {
                if (words[i][m - 1] == 'a' || words[i][m - 1] == 'e' ||
                    words[i][m - 1] == 'i' || words[i][m - 1] == 'o' ||
                    words[i][m - 1] == 'u') {
                    word[i] = 1;
                }
            }
        }

        for (int i = 1; i < n; i++) {
            word[i] = word[i] + word[i - 1];
        }

        int k = queries.size();
        vector<int> result(k, 0);
        for (int i = 0; i < k; i++) {
            if (queries[i][0]) {
                result[i] = word[queries[i][1]] - word[queries[i][0] - 1];
            } else {
                result[i] = word[queries[i][1]];
            }
        }
        return result;
    }
};