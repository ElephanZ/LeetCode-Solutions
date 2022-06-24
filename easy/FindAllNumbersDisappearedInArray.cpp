// runtime: 58ms, faster than 93.27% of C++ online submissions for Find All Numbers Disappeared in an Array
// memory usage: 33.7MB, less than 83.19% of C++ online submissions for Find All Numbers Disappeared in an Array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> appeared(n, false);
        
        for (auto num: nums)
            appeared[num] = true;
        
        vector<int> res;
        
        for (int i = 1; i <= n; i++)
            if (appeared[i] == false)
                res.push_back(i);
        
        return res;
    }
};
