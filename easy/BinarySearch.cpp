// runtime: 37ms, faster than 81.69% of C++ online submissions for Binary Search
// memory usage: 27.5MB, less than 92.46% of C++ online submissions for Binary Search

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1;
        
        while (l <= r) {
            int m = l + ((r-l) / 2);
            
            if (nums[m] == target)
                return m;
            else if (target < nums[m])
                r = m-1;
            else
                l = m+1;
        }
        
        return -1;
    }
};
