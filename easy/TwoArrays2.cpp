// runtime: 6ms, faster than 75.55% of C++ online submissions for Two Arrays II
// memory usage: 10.1MB, less than 60.44% of C++ online submissions for Two Arrays II

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int> res;
        int n = nums1.size(), m = nums2.size();
        
        for (int i = 0, j = 0; i < n && j < m; ) {
            if (nums1[i] < nums2[j]) {
                i++;
                continue;
            }
            if (nums1[i] > nums2[j]) {
                j++;
                continue;
            }
            
            res.push_back(nums1[i]);
            i++, j++;
        }
        
        return res;
    }
};
