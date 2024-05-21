/**
time complexity=O(N)
space complexity=O(1)
 */
class Solution {
public:
bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;

        return isMirror(root->left, root->right);
    }
    bool isMirror(TreeNode* left, TreeNode* right) {
        if (left == NULL && right == NULL)
            return true;
        else if (left == NULL || right == NULL)
            return false;

        return (left->val == right->val) && isMirror(left->left, right->right)
         && isMirror(left->right, right->left);
    }
};

