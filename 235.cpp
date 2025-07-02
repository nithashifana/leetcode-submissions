// Lowest Common Ancestor of a Binary Search Tree
// Medium

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root) {
            if(p->val > root->val && q->val > root->val) {
                root = root->right;
            } else if(p->val < root->val && q->val < root->val) {
                root = root->left;
            } else return root;
        }
        return nullptr;
    }
};