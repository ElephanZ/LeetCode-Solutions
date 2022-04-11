// runtime: 4ms, faster than 21.76% of C++ online submissions for Climbing Stairs
// memory usage: 5.7MB, less than 97.11% of C++ online submissions for Climbing Stairs

class Solution {
public:
    int climbStairs(int n) {
        int dp[n+2];
        dp[0] = 0, dp[1] = 1, dp[2] = 2;
        
        for (int i = 3; i <= n; i++)
            dp[i] = dp[i-1] + dp[i-2];
        
        return dp[n];
    }
};
