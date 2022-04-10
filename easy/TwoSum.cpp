// runtime: 5ms, faster than 97.90% of C++ online submissions for TwoSum
// memory usage: 11.5MB, less than 15.40% of C++ online submissions for TwoSum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> visited;
        unordered_map<int, int> positions;
        
        for (int i = 0; i < nums.size(); i++) {
            positions.emplace(nums[i], i);
            
            if (visited.count(target - nums[i]) > 0)
                return {i, positions[target - nums[i]]};
            
            visited.insert(nums[i]);
        }
        
        return {};
    }
};
