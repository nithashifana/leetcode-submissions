// Valid parentheses
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> mp = {{')', '('}, {']', '['}, {'}', '{'}};
        for (char c : s) {
            if (mp.count(c)) {
                if (!stack.empty() && mp[c] == stack.top()) {
                    stack.pop();
                } else
                    return false;
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};