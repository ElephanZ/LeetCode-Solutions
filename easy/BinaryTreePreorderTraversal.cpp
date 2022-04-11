// runtime: 2ms, faster than 58.24% of C++ online submissions for Binary Tree Preorder Traversal
// memory usage: 8.4MB, less than 77.78% of C++ online submissions for Binary Tree Preorder Traversal

class Solution {
public:
    void preorder(TreeNode *node, vector<int> &res) {
        if (node == nullptr) 
            return;
        
        res.push_back(node->val);
        preorder(node->left, res);
        preorder(node->right, res);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> sol;
        preorder(root, sol);
        
        return sol;
    }
};
