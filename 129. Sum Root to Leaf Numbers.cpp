class Solution {
public:
    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }

private:
    int dfs(TreeNode* node, int sum) {
        if (node == nullptr) return 0;
        sum = sum * 10 + node->val;
        if (node->left == nullptr && node->right == nullptr) {
            return sum;
        } else {
            return dfs(node->left, sum) + dfs(node->right, sum);
        }
    }
};
//tc=O(N)
//sc=1
