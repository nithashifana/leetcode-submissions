// Check if Numbers Are Ascending in a Sentence
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool areNumbersAscending(string s) {
        int prev = 0;
        istringstream iss(s);
        string token;
        while(iss >> token) {
            if(isdigit(token[0])) {
                int num = stoi(token);
                if(num <= prev) return false;
                prev = num;
            }
        }
        return true;
    }
};
