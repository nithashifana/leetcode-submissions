// Unique Morse Code Words
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseTable = {".-","-...","-.-.","-..",".","..-.","--.",
                                     "....","..",".---","-.-",".-..","--","-.",
                                     "---",".--.","--.-",".-.","...","-","..-",
                                     "...-",".--","-..-","-.--","--.."};
        unordered_set<string> unique;
        for(string word:words) {
            string code = "";
            for(char c:word) {
                code += morseTable[c - 'a'];
            }
            unique.insert(code);
        }
        return unique.size();
    }
};