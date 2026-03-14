// Find the Kth Largest Integer in the Array
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    struct cmp {
        bool operator()(string a, string b) {
            if(a.size() == b.size())
                return a < b;      
            return a.size() < b.size(); 
        }
    };

    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>, cmp> pq;

        for(int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }

        while(k - 1 > 0) {
            pq.pop();
            k--;
        }

        return pq.top();
    }
};