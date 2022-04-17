class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int sol = 0;
        unordered_map<int, int> seen;
        
        for (int i = 0; i < n; i++) {
            if (seen.find(nums[i]) != seen.end())
                sol += seen[nums[i]];
            
            seen[nums[i]]++;
        }
        
        return sol;
    }
};
