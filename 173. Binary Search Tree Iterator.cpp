/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode* > st;
    void inorder(TreeNode* root){
        if(root==NULL) return;
        st.push(root);
        inorder(root->left);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    int next() {
        TreeNode* temp=st.top();
        st.pop();
        inorder(temp->right);
        return temp->val;
    }
      bool hasNext() {
        return !st.empty();
    }
};
//dfs//O(N)


/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
