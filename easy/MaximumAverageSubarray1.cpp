// runtime: 189ms, faster than 81.64% of C++ online submissions for Maximum Average Subarray I
// memory usage: 109.7MB, less than 7.74% of C++ online submissions for Maximum Average Subarray I

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;
        
        for (int i = 0; i < k; i++)
            sum += nums[i];
        
        int maximum = sum;
        
        for (int i = k; i < n; i++) {
            sum -= nums[i-k] - nums[i];
            maximum = max(maximum, sum);
        }
            
        return (double)maximum / k;
    }
};
