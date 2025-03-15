// Unique 3-digit even numbers
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> arr;
        sort(digits.begin(), digits.end());
        do {
            if(digits[0] != 0 && digits[2] %2 == 0) {
                int n = digits[0] * 100 + digits[1] * 10 + digits[2];
                arr.insert(n);
            }
        } while(next_permutation(digits.begin(), digits.end()));
        return arr.size();
    }
};