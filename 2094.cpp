// Finding 3-digit even numbers
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int num;
        set<int> arr;
        for (int i = 0; i < digits.size(); i++) {
            for (int j = 0; j < digits.size(); j++) {
                for (int k = 0; k < digits.size(); k++) {
                    if (i != j && j != k && k != i) {
                        num = digits[k] + 10 * digits[j] + 100 * digits[i];
                        if (num % 2 == 0 && num / 100 != 0) {
                            arr.insert(num);
                        }
                    }
                }
            }
        }
        return vector<int> (arr.begin(), arr.end());
    }
};