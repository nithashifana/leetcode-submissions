// Reverse prefix of word
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = word.find(ch);
        int i = 0, j = index;
        while(i < j) {
            swap(word[i], word[j]);
            i ++;
            j --;
        }
        return word;
    }
};