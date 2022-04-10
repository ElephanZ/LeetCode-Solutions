// runtime: 16ms, faster than 57.30% of C++ online submissions for Sorted Array
// memory usage: 19.3MB, less than 5.64% of C++ online submissions for Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> unique;
        vector<int> res;
        
        for (auto n: nums) {
            if (unique.find(n) == unique.end()) {
                res.push_back(n);
                unique.insert(n);
            }
        }
        
        nums = res;
        return res.size();
    }
};
