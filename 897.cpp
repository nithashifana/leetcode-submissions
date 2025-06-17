// Increasing Order Search Tree
// Easy

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(0);
        TreeNode* current = dummy;
        inorder(root, current);
        return dummy->right;
    }
    void inorder(TreeNode* node, TreeNode*& current) {
        if(!node) return;
        inorder(node->left, current);
        node->left = nullptr;
        current->right = node;
        current = node;
        inorder(node->right, current);
    }
};