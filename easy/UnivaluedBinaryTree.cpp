// runtime: 4ms, faster than 48.34% of C++ online submissions for Univalued Binary Tree
// memory usage: 10MB, less than 45.31% of C++ online submissions for Univalued Binary Tree

class Solution {
public:
    bool dfs(TreeNode *node, int prev) {
        if (node == nullptr)
            return true;
        
        if (node->val != prev)
            return false;
        
        return dfs(node->left, prev) && dfs(node->right, prev);
    }
    
    bool isUnivalTree(TreeNode* root) {
        if (root == nullptr)
            return true;
        
        return dfs(root, root->val);
    }
};
