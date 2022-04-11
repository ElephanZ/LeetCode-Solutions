
// runtime: 0ms, faster than 100% of C++ online submissions for Same Tree
// memory usage: 10.1MB, less than 7.35% of C++ online submissions for Same Tree

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == nullptr && q == nullptr)
            return true;
        if (p == nullptr || q == nullptr)
            return false;
        
        if (p->val == q->val)
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        else 
            return false;
    }
};
