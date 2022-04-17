// runtime: 0ms, faster than 100% of C++ online submissions for Increasing Order Search Tree
// memory usage: 7.8MB, less than 59.76% of C++ online submissions for Increasing Order Search Tree

class Solution {
public:
    void inorder(TreeNode *node, vector<int> &nodes) {
        if (node == nullptr)
            return;
        
        inorder(node->left, nodes);
        nodes.push_back(node->val);
        inorder(node->right, nodes);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        if (root == nullptr)
            return nullptr;
        
        vector<int> nds;
        inorder(root, nds);
        
        TreeNode *res = nullptr, *last = nullptr, *tmp;
        
        for (auto node: nds) {
            tmp = new TreeNode(node);
            
            if (res == nullptr) res = tmp;
            else if (last != nullptr) last->right = tmp, last = last->right;
            else last = tmp, res->right = last;
            
        }
        
        return res;
    }
};
