// Find the original array of prefix XOR
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> arr(pref.size());
        arr[0] = pref[0];
        for (int i = 1; i < pref.size(); i++) {
            arr[i] = pref[i] ^ pref[i - 1];
        }
        return arr;
    }
};