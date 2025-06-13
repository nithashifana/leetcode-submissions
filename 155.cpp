// Min Stack
// Medium

#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> stk;
    MinStack() {
        
    }
    
    void push(int val) {
        stk.push(val);
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
        return stk.top();
    }
    
    int getMin() {
        stack<int> temp;
        int mini = stk.top();
        while(stk.size()) {
            mini = min(mini, stk.top());
            temp.push(stk.top());
            stk.pop();
        }
        while(temp.size()) {
            stk.push(temp.top());
            temp.pop();
        }
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */