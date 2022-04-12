// runtime: 0ms, faster than 100% of C++ online submissions for Leaf-Similar Trees
// memory usage: 12.7MB, less than 84.74% of C++ online submissions for Leaf-Similar Trees

class Solution {
public:
    void get_leafs(TreeNode *node, vector<int> &res) {
        if (node == nullptr)
            return;
        
        get_leafs(node->left, res);
        
        if (node->left == nullptr && node->right == nullptr)
            res.push_back(node->val);
        
        get_leafs(node->right, res);
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1, tree2;
        
        get_leafs(root1, tree1);
        get_leafs(root2, tree2);
        
        int n = tree1.size(), m = tree2.size();
        
        if (n != m) 
            return false;
        
        for (int i = 0; i < n; i++)
            if (tree1[i] != tree2[i])
                return false;
        
        return true;
    }
};
