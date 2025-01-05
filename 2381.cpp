// Shifting letters II
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int stringLength = s.length();
        vector<int> shiftValues(stringLength + 1, 0);

        for (int i = 0; i < shifts.size(); ++i) {
            int startIndex = shifts[i][0];
            int endIndex = shifts[i][1];
            int direction = shifts[i][2];

            shiftValues[startIndex] += (2 * direction - 1);
            shiftValues[endIndex + 1] -= (2 * direction - 1);

            // if (direction == 1) {
            //     shiftValues[startIndex]++;
            //     shiftValues[endIndex + 1]--;
            // } else {
            //     shiftValues[startIndex]--;
            //     shiftValues[endIndex + 1]++;
            // }
        }

        int cumulativeShift = 0;
        for (int i = 0; i < stringLength; ++i) {
            cumulativeShift += shiftValues[i];
            int newPosition = (s[i] - 'a' + cumulativeShift % 26 + 26) % 26;
            s[i] = char('a' + newPosition);
        }

        return s;
    }
};