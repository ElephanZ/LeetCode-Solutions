// runtime: 31ms, faster than 57.26% of C++ online submissions for Move Zeroes
// memory usage: 20.6MB, less than 5.28% of C++ online submissions for Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> sol;
        int zeros = 0;
        
        for (auto num: nums) {
            if (num == 0) zeros++;
            else sol.push_back(num);
        }
        
        for (int i = 0; i < zeros; i++)
            sol.push_back(0);
        
        nums = sol;
    }
};
