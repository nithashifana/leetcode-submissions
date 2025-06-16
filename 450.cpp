// Delete node in a BST
// Medium

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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return root;
        
        TreeNode* parent = nullptr;
        TreeNode* cur = root;
        
        // traverse
        while (cur && cur->val != key) {
            parent = cur;
            if (key > cur->val) {
                cur = cur->right;
            } else {
                cur = cur->left;
            }
        }
        
        if (!cur) return root;
        
        // Node with one child or no child
        if (!cur->left || !cur->right) {
            TreeNode* child = cur->left ? cur->left : cur->right;
            if (!parent) return child;
            if (parent->left == cur) {
                parent->left = child;
            } else {
                parent->right = child;
            }
        } else {
            // two children
            TreeNode* par = nullptr;
            TreeNode* delNode = cur;
            cur = cur->right;
            while (cur->left) {
                par = cur;
                cur = cur->left;
            }
            
            if (par) { // if left
                par->left = cur->right;
                cur->right = delNode->right;
            }
            cur->left = delNode->left;
            
            if (!parent) return cur; // if root
            
            if (parent->left == delNode) {
                parent->left = cur;
            } else {
                parent->right = cur;
            }
        }
        
        return root;
    }
};