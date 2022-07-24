class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        unsigned int n = nums.size();
        unsigned int i = 0;
        vector<int> ans(n);
        
        for (auto num: nums)
            ans[i++] = nums[num];
        
        return ans;
    }
};
