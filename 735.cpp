// Asteroid Collision
// Medium

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        st.push(asteroids[0]);
        for(int i = 1; i < asteroids.size(); i ++) {
            bool destroyed = false;
            while(!st.empty() && st.top() > 0 && asteroids[i] < 0) {
                int a = st.top();
                int b = asteroids[i];
                if(abs(a) == abs(b)) {
                    st.pop();
                    destroyed = true;
                    break;
                }
                else if(abs(a) < abs(b)) {
                    st.pop();
                } else {
                    destroyed = true;
                    break;
                }
            }
            if(!destroyed) st.push(asteroids[i]);
        }
        vector<int> res;
        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};