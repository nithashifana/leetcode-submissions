// Keyboard Row
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        unordered_map<char, int> row;

        string one = "qwertyuiop";
        string two = "asdfghjkl";
        string three = "zxcvbnm";

        for(char c : one) row[c] = 1;
        for(char c : two) row[c] = 2;
        for(char c : three) row[c] = 3;

        for(string word : words) {
            int currentRow = row[tolower(word[0])];
            bool sameRow = true;
            for(char c : word) {
                if(row[tolower(c)]  != currentRow) {
                    sameRow = false;
                    break;
                }
            }
            if(sameRow) res.push_back(word);
        }

        return res;
    }
};