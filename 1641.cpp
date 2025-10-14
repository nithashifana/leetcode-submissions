// Count Sorted Vowel Strings
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // int fact(int n) {
    //     if(n < 2) return 1;
    //     else return n * fact(n - 1);
    // }
    // int comb(int n, int r) {
    //     return fact(n) / (fact(n - r) * fact(r));
    // }
    // int countVowelStrings(int n) {
    //     return comb(n + 4, 4);
    // }

    // A[i][j]=A[i−1][j]+A[i−1][j−1]
    // dp[j] = dp[j] + dp[j - 1]

    int countVowelStrings(int n) {
        // find (n + 4)C4
        n = n + 4;
        int r = 4;
        vector<long long> dp(r + 1, 0);
        dp[0] = 1;
        for(int i = 0; i <= n; i ++) {
            for(int j = min(i, r); j >= 1; j --) {
                dp[j] = dp[j] + dp[j - 1];
            }
        }
        return dp[r];
    }
};