// Split with minimum sum
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int splitNum(int num) {
        vector<int> arr;
        while(num) {
            arr.push_back(num % 10);
            num /= 10;
        }
        sort(arr.begin(), arr.end());
        int n1 = 0;
        int n2 = 0;
        for(int i = 0; i < arr.size(); i += 2) n1 = n1 * 10 + arr[i];
        for(int i = 1; i < arr.size(); i += 2) n2 = n2 * 10 + arr[i];
        return n1 + n2; 
    }
};