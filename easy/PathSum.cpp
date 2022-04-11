// runtime: 12ms, faster than 72.74% of C++ online submissions for Path Sum
// memory usage: 21.3MB, less than 74.57% of C++ online submissions for Path Sum

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr)
            return false;
        
        if (root->val == targetSum && root->left == nullptr && root->right == nullptr)
            return true;
        
        return hasPathSum(root->left, targetSum-(root->val)) || hasPathSum(root->right, targetSum-(root->val));
    }
};
