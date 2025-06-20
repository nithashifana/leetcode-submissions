// Number of Students Unable to Eat Lunch
// Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        unordered_map<int, int> mp;
        for(int c:students) {
            mp[c] ++;
        }
        for(int c:sandwiches) {
            if(mp[c] > 0) {
                mp[c] --;
            }
            else break;
        }
        return mp[0] + mp[1];
    }
};

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int s:students) q.push(s);
        int i = 0, c = 0;
        while(!q.empty() && c < q.size()) {
            if(q.front() == sandwiches[i]) {
                q.pop();
                i ++;
                c = 0;
            }
            else {
                q.push(q.front());
                q.pop();
                c ++;
            }
        }
        return q.size();
    }
};