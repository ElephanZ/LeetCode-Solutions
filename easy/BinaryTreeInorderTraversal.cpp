// runtime: 0ms, faster than 100% of C++ online submissions for Binary Tree Inorder Traversal
// memory usage: 8.5MB, less than 17.91% of C++ online submissions for Binary Tree Inorder Traversal

class Solution {
public:
    void inorder(TreeNode *node, vector<int> &res) {
        if (node == nullptr)
            return;
        
        inorder(node->left, res);
        res.push_back(node->val);
        inorder(node->right, res);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> nodes;
        
        inorder(root, nodes);
        return nodes;
    }
};
