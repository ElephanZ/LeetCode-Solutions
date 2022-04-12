// runtime: 14ms, faster than 58.88% of C++ online submissions for Closest Binary Search Tree Value
// memory usage: 20.8MB, less than 94.70% of C++ online submissions for Closest Binary Search Tree Value

class Solution {
public:
    pair<int, double> best;
    
    void search(TreeNode *node, double target) {
        if (node == nullptr)
            return;
        
        if (abs((node->val) - target) < best.second)
            best = { node->val, abs((node->val) - target) };
        
        if (target < node->val) search(node->left, target);
        else search(node->right, target);
    }
    
    int closestValue(TreeNode* root, double target) {
        best = {-1, numeric_limits<double>::max()};
        search(root, target);
        return best.first;
    }
};
