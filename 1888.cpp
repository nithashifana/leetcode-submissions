// Minimum Number of Flips to Make the Binary String Alternating
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string t = s + s;
        int a = 0, b = 0;
        int res = INT_MAX;
        int l = 0;

        for (int r = 0; r < t.size(); r++) {
            if ((r % 2 == 0 && t[r] != '0') || (r % 2 == 1 && t[r] != '1')) a++;
            if ((r % 2 == 0 && t[r] != '1') || (r % 2 == 1 && t[r] != '0')) b++;

            if (r - l + 1 > n) {
                if ((l % 2 == 0 && t[l] != '0') || (l % 2 == 1 && t[l] != '1')) a--;
                if ((l % 2 == 0 && t[l] != '1') || (l % 2 == 1 && t[l] != '0')) b--;
                l++;
            }

            if (r - l + 1 == n) res = min(res, min(a, b));
        }

        return res;
    }
};