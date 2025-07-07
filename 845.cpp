// Longest Mountain in Array
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int longest = 0;
        int i = 1;
        while(i < n - 1) {
            if(arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                int l = i - 1;
                int r = i + 1;
                while(l > 0 && arr[l - 1] < arr[l]) {
                    l --;
                }
                while(r < n - 1 && arr[r + 1] < arr[r]) {
                    r ++;
                }
                longest = max(longest, r - l + 1);
                i = r;
            } else i ++;
        }
        return longest;
    }
};