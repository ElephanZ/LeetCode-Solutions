// runtime: 5ms, faster than 55.96% of C++ online submissions for Search Insert Position
// memory usage: 9.8MB, less than 23.79% of C++ online submissions for Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1, m;
        
        while (l <= r) {
            m = l + (r - l) / 2;
            if (nums[m] == target) return m;
            else if (nums[m] < target) l = m+1;
            else r = m-1;
        }
        
        if (target >= nums[m]) return m+1;
        return m;
    }
};
