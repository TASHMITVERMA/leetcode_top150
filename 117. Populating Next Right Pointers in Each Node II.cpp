class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return nullptr; 
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            Node* prev = nullptr;

            for (int i = 0; i < size; ++i) {
                Node* curr = q.front();
                q.pop();

                // Connecting previous node on the same level-order-trav,main line hai
                if (prev) prev->next = curr;

                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);

                prev = curr;
            }
        }
        return root;
    }
};
//sc=tc=O(N)
