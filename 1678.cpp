// Goal Parser Interpretation
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string interpret(string command) {
        string s = "";
        for(int i = 0; i < command.size(); i ++) {
            if(command[i] == 'G') s += command[i];
            else if(command[i] == '(' && command[i+1] == ')') s += 'o';
            else if(command[i] == 'a') s += command[i];
            else if(command[i] == 'l') s += command[i];
        }
        return s;
    }
};