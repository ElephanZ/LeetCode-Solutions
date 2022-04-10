// runtime: 0ms, faster than 100% of C++ online submissions for Remove Element
// memory usage: 8.9MB, less than 35.82% of C++ online submissions for Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> res;
        
        for (auto v: nums)
            if (v != val)
                res.push_back(v);
        
        nums = res;
        return res.size();
    }
};
