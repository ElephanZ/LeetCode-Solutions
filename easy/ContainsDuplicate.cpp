// runtime: 96ms, faster than 83.99% of C++ online submissions for Contains Duplicate
// memory usage: 51.4MB, less than 50.27% of C++ online submissions for Contains Duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> unique;
        
        for (auto n: nums) {
            if (unique.find(n) != unique.end())
                return true;
            
            unique.insert(n);
        }
            
        return false;
    }
};
