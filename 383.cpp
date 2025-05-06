// Ransom Note
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> arr;
        for (char c : magazine) {
            arr[c]++;
        }
        for(char c : ransomNote) {
            if(arr[c] <= 0) {
                return false;
            }
            arr[c] --;
        }
        return true;
    }
};