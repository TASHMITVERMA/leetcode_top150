class Solution {
public:
    int calcLeft(TreeNode* root) {
        int height = 1;
        while(root) {
            height++;
            root = root->left;
        }
        return height;
    }
    int calcRight(TreeNode* root) {
        int height = 1;

        while(root) {
            height++;
            root = root->right;
        }
        return height;
    }
    int calcNodes(TreeNode* root) {
        if(root == NULL)
            return 0;
        int leftHeight = calcLeft(root->left);
        int rightHeight = calcRight(root->right);

        if(leftHeight == rightHeight) {
            return pow(2,leftHeight)-1;
        }
        return 1 + calcNodes(root->left) + calcNodes(root->right);
    }
    int countNodes(TreeNode* root) {
        return calcNodes(root);
    }
};




// class Solution {
// public:
// int f(TreeNode* root)
// {
//     if(root==NULL)
//     return 0;
//     return 1+f(root->left)+f(root->right);
// }
//     int countNodes(TreeNode* root) {
//         return f(root);
//     }
// };
//tc-O(N)//visit every node once
//sc-O(N)height of tree times
//recursive dfs
