// runtime: 0ms, faster than 100% of C++ online submissions for Sum of Left Leaves
// memory usage: 13.3MB, less than 82.93% of C++ online submissions for Sum of Left Leaves

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr)
            return 0;
        
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr)
            return root->left->val + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
        
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
};
