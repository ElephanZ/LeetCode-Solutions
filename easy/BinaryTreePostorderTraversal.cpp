// runtime: 3ms, faster than 57.10% of C++ online submissions for Binary Tree Postorder Traversal
// memory usage: 8.4MB, less than 64.83% of C++ online submissions for Binary Tree Postorder Traversal

class Solution {
public:
    void postorder(TreeNode *node, vector<int> &res) {
        if (node == nullptr) 
            return;
        
        postorder(node->left, res);
        postorder(node->right, res);
        res.push_back(node->val);
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> sol;
        postorder(root, sol);
        
        return sol;
    }
};
