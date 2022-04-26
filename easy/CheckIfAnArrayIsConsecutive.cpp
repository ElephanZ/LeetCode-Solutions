// runtime: 102ms, faster than 89.39% of C++ online submissions for Check if an Array Is Consecutive
// memory usage: 60.3MB, less than 54.55% of C++ online submissions for Check if an Array Is Consecutive

class Solution {
public:
    bool isConsecutive(vector<int>& nums) {
        bool present[100001] {0};
        int minimum = numeric_limits<int>::max();
        int n = nums.size();
        
        for (auto n: nums) {
            present[n] = true;
            minimum = min(minimum, n);
        }
        
        for (int i = minimum; i < minimum + n; i++)
            if (!present[i])
                return false;
        
        return true;
    }
};
