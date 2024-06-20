class Solution {
public:
    vector<int> ans;
    void helper(TreeNode* root, int depth) {
        if (root == NULL) return;
        if (ans.size() == depth) ans.push_back(root->val);
        // If ans vector size is equal to current depth, it means we are visiting this depth for the first time
        helper(root->right, depth + 1);
        helper(root->left, depth + 1);cout<<root->val;
    }
    
    vector<int> rightSideView(TreeNode* root) {
        helper(root, 0);
        return ans;
    }
};
