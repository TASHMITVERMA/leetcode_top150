class Solution {
public:
int f(TreeNode* root)
{
    if(root==NULL)
    return 0;
    return 1+f(root->left)+f(root->right);
}
    int countNodes(TreeNode* root) {
        return f(root);
    }
};
//tc-O(N)//visit every node once
//sc-O(N)height of tree times
//recursive dfs

















// class Solution {
// public:
//     int inorder(TreeNode* root)
//     {
//         if (root == NULL)
//             return 0;
//         return 1 + inorder(root->left) + inorder(root->right);
//     }

//     int countNodes(TreeNode* root) {
//         return inorder(root);
//     }
// };
