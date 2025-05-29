// Kth distinct string in an array
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for(int i = 0; i < arr.size(); i ++) {
            mp[arr[i]] ++;
        }
        int p = 0;
        for(int i = 0; i < arr.size(); i ++) {
            if(mp[arr[i]] == 1) p ++;
            if(p == k) return arr[i];
        }
        return "";
    }
};