class Solution {
public:
    Node* cloneGraph(Node* node) {        
        if (!node) return nullptr;
        unordered_map<Node*, Node*> visited;//ori vs copy
        stack<Node*> stk;
        Node* cloneNode = new Node(node->val);
        visited[node] = cloneNode;
        stk.push(node);
        while (!stk.empty()) {
            Node* curr = stk.top();
            stk.pop();
            for (Node* neighbor : curr->neighbors) {
                if (visited.find(neighbor) == visited.end()) {
                    Node* newNeighbor = new Node(neighbor->val);
                    visited[neighbor] = newNeighbor;
                    stk.push(neighbor);
                }
                visited[curr]->neighbors.push_back(visited[neighbor]);
            }
        }
        return cloneNode;
    }
};

//DFS
//O(V+E)
