// runtime: 5ms, faster than 14.18% of C++ online submissions for Missing Ranges
// memory usage: 7.1MB, less than 48.16% of C++ online submissions for Missing Ranges

class Solution {
public:
    bool isRange(int a, int b) {
        return b-a > 0;
    }
    
    string formatter(int a, int b) {
        if (isRange(a, b))
            return to_string(a) + "->" + to_string(b);
        
        return to_string(a);
    }
    
    vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        int n = nums.size();
        
        if (n == 0)
            return {formatter(lower, upper)};
        
        vector<string> res;
        
        if (lower != nums[0])
            res.push_back(formatter(lower, nums[0]-1));
        
        for (int i = 1; i < n; i++) 
            if (nums[i] != nums[i-1] + 1)
                res.push_back(formatter(nums[i-1]+1, nums[i]-1));
        
        if (nums[n-1] != upper)
            res.push_back(formatter(nums[n-1]+1, upper));
        
        return res;
    }
};
