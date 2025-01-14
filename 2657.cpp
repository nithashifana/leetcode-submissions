// Find the prefix common array of two arrays
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> freq(n + 1, 0);
        vector<int> ans;
        int k = 0;
        for(int i = 0; i < n; i ++) {
            if(++freq[A[i]] == 2) k ++;
            if(++freq[B[i]] == 2) k ++;
            ans.push_back(k);
        }
        return ans;
    }
};