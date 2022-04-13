// runtime: 11ms, faster than 85.61% of C++ online submissions for Balanced Binary Tree
// memory usage: 20.8MB, less than 95.42% of C++ online submissions for Balanced Binary Tree

class Solution {
public:
    const int INF = 5000;
    
    int checkHeight(TreeNode *node) {
        if (node == nullptr)
            return 0;
        
        int left_height = checkHeight(node->left);
        int right_height = checkHeight(node->right);
        
        if (left_height >= INF || right_height >= INF)
            return INF;
        
        if (abs(left_height - right_height) <= 1) 
            return 1 + max(left_height, right_height);
        
        return INF;
    }
    
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) < INF;
    }
};
