// Categorize box according to criteria
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        int a = 0, b = 0;
        long long vol = 1LL * length * width * height;
        if(length >= 1e4 || width >= 1e4 || height >= 1e4 || mass >= 1e4 || vol >= 1e9) a = 1;
        if(mass >= 100) b = 1;
        if(a && b) return "Both";
        if(!a && !b) return "Neither";
        if(a && !b) return "Bulky";
        return "Heavy";
    }
};