// runtime: 94ms, faster than 42.12% of C++ online submissions for Find the Difference of Two Arrays
// memory usage: 32.6MB, less than 53.98% of C++ online submissions for Find the Difference of Two Arrays

class Solution {
public:    
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> answer(2, vector<int>());
        
        int n = nums1.size(), m = nums2.size();
        unordered_set<int> inNumsOne, inNumsTwo;
        
        for (int i = 0; i < n; i++)
            inNumsOne.insert(nums1[i]);
        
        for (int i = 0; i < m; i++) 
            inNumsTwo.insert(nums2[i]);
            
        for (auto el: inNumsOne)
            if (inNumsTwo.find(el) == inNumsTwo.end())
                answer[0].push_back(el);
        
        for (auto el: inNumsTwo)
            if (inNumsOne.find(el) == inNumsOne.end())
                answer[1].push_back(el);
                
        return answer;
    }
};
