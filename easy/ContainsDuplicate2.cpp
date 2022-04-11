// runtime: 156ms, faster than 95.05% of C++ online submissions for Contains Duplicate II
// memory usage: 77.1MB, less than 51.74% of C++ online submissions for Contains Duplicate II

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> unique;
        
        for (int i = 0; i < nums.size(); i++) {
            if (unique.find(nums[i]) != unique.end())
                if (abs(i - unique[nums[i]]) <= k)
                    return true;
                    
            unique[nums[i]] = i;
        }
            
        return false;
    }
};
