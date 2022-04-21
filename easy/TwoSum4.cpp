// runtime: 44ms, faster than 76.98% of C++ online submissions for Two Sum IV
// memory usage: 36MB, less than 98.66% of C++ online submissions for Two Sum IV

class Solution {
public:
    TreeNode *bigroot;
    
    Solution() {
        bigroot = nullptr;
    }
    
    bool find(TreeNode *node, int target) {
        if (node == nullptr)
            return false;
        
        if (node->val == target)
            return true;
        
        if (target < node->val)
            return find(node->left, target);
        
        return find(node->right, target);
    }
    
    bool findTarget(TreeNode* root, int k) {
        if (root == nullptr)
            return false;

        if (bigroot == nullptr)
            bigroot = root;
        
        if (k - (root->val) != root->val && find(bigroot, k - (root->val)))
            return true;
        
        return findTarget(root->left, k) || findTarget(root->right, k);
    }
};
