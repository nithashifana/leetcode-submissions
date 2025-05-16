// Check if the sentence is pangram
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        for(char c = 'a'; c <= 'z'; ++c) {
            if(sentence.find(c) == string :: npos) return false;
        }
        return true;
    }
};