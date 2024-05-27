class Solution {
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return build(inorder, postorder,0, inorder.size()-1, 0, postorder.size()-1);
    }
    TreeNode* build(vector<int>& inorder, vector<int>& postorder,
    int inStart, int inEnd, int postStart, int postEnd) {
        if (inStart > inEnd) return nullptr;

        int rootVal = postorder[postEnd];
        TreeNode* root = new TreeNode(rootVal);
        
        int inIndex = inStart;
        while (inorder[inIndex] != rootVal) inIndex++;

        int leftSubtreeSize = inIndex - inStart;
        
        root->left = build(inorder, postorder, inStart, inIndex-1, postStart, postStart+leftSubtreeSize-1);
        root->right = build(inorder, postorder, inIndex+1, inEnd, postStart+leftSubtreeSize, postEnd-1);

        return root;
    }
};
