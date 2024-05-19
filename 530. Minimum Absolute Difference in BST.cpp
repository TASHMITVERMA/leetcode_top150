class Solution {
public:

    void f(TreeNode* node,vector<int>&arr){
        if(node == NULL)
        return;
            arr.push_back(node->val);
            f(node->left,arr);
            f(node->right,arr);
            return;
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>arr;
        f(root,arr);
        sort(arr.begin(),arr.end());
        int ans = INT_MAX;
        for(int i = 1;i < arr.size();i++){
            ans = min(ans,arr[i] - arr[i-1]);
        }
        return ans;
    }
};
//tc=nlog(n)+n
//sc=O(N)
//inorder
