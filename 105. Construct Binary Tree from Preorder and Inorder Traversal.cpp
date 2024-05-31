class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder, inorder, 0, preorder.size() - 1, 0, inorder.size() - 1);
    }

    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int preStart, int preEnd, int inStart, int inEnd) {
        if (preStart > preEnd || inStart > inEnd) return nullptr;

        int rootVal = preorder[preStart];
        TreeNode* root = new TreeNode(rootVal);

        int inIndex = inStart;
        while (inorder[inIndex] != rootVal) inIndex++;

        int leftSubtreeSize = inIndex - inStart;

        root->left = build(preorder, inorder, preStart + 1, preStart + leftSubtreeSize, inStart, inIndex - 1);
        root->right = build(preorder, inorder, preStart + leftSubtreeSize + 1, preEnd, inIndex + 1, inEnd);

        return root;
    }
};
//tc=sc=O(N)
