// Clone graph
// Medium

#include <bits/stdc++.h>
using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

class Solution {
    unordered_map<Node*, Node*> mpp;
public:
    Node* cloneGraph(Node* node) {
        if(!node) {
            return nullptr;
        }
        if(mpp.count(node)) {
            return mpp[node];
        }

        Node* cloned = new Node(node->val, {});
        mpp[node] = cloned; 

        for(auto nei : node->neighbors) {
            cloned->neighbors.push_back(cloneGraph(nei));
        }
        return mpp[node];
    }
};