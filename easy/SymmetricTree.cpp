// runtime: 7ms, faster than 62.52% of C++ online submissions for Symmetric Tree
// memory usage: 16.6MB, less than 17.16% of C++ online submissions for Symmetric Tree

class Solution {
public:
    bool mirror(TreeNode *node1, TreeNode *node2) {
        if (node1 == nullptr && node2 == nullptr)
            return true;
        
        if (node1 == nullptr || node2 == nullptr)
            return false;
        
        return (node1->val == node2->val) && check(node1->left, node2->right) && check(node1->right, node2->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return mirror(root, root);
    }
};
