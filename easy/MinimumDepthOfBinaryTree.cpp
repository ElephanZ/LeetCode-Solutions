// runtime: 312ms, faster than 66.02% of C++ online submissions for Minimum Depth of Binary Tree
// memory usage: 146.2MB, less than 12.12% of C++ online submissions for Minimum Depth of Binary Tree

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (root == nullptr)
            return 0;
        
        if (root->left == nullptr && root->right == nullptr)
            return 1;
        
        int l = numeric_limits<short>::max();
        if (root->left != nullptr)
            l = minDepth(root->left);
        
        int r = numeric_limits<short>::max();
        if (root->right != nullptr)
            r = minDepth(root->right);
    
        return min(l, r) + 1;
    }
};
