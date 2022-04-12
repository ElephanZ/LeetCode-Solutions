// runtime: 25ms, faster than 38.97% of C++ online submissions for Find All The Lonely Nodes
// memory usage: 20.2MB, less than 73.28% of C++ online submissions for Find All The Lonely Nodes

class Solution {
public:
    void dfs(TreeNode *node, vector<int> &res) {
        if (node == nullptr)
            return;
        
        if (node->left == nullptr && node->right != nullptr)
            res.push_back(node->right->val);
        else if (node->left != nullptr && node->right == nullptr)
            res.push_back(node->left->val);
            
        dfs(node->left, res);
        dfs(node->right, res);
    }
    
    vector<int> getLonelyNodes(TreeNode* root) {
        vector<int> res;
        dfs(root, res);
        return res;
    }
};
