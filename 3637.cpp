// Trionic Array I
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        string s = "";
        char c;
        for(int i = 1; i < nums.size(); i ++) {
            if(nums[i] == nums[i - 1]) return false;
            if(nums[i] > nums[i - 1]) c = 'I';
            else c = 'D';
            if(s.empty() || s.back() != c) s += c;
        }
        return s == "IDI";
    }
};