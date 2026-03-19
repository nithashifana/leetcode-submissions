// Maximum Substrings With Distinct Start
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistinct(string s) {
        set<char> st(s.begin(), s.end());
        return st.size();
    }
};