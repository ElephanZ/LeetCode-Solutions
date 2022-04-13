// runtime: 6ms, faster than 97.86% of C++ online submissions for TwoSum
// memory usage: 10.9MB, less than 28.86% of C++ online submissions for TwoSum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> visited;
        
        for (int i = 0; i < nums.size(); i++) {           
            if (visited.find(target - nums[i]) != visited.end())
                return {i, visited[target - nums[i]]};
            
            visited.emplace(nums[i], i);
        }
        
        return {};
    }
};
