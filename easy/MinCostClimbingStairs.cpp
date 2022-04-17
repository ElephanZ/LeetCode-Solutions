class Solution {
public:    
    int climbing(vector<int> cost, int pos, int n, vector<int> &dp) {
        if (pos >= n)
            return 0;
        
        if (dp[pos] != -1)
            return dp[pos];
        
        dp[pos] = cost[pos] + min(
            climbing(cost, pos+1, n, dp),
            climbing(cost, pos+2, n, dp)
        );
        
        return dp[pos];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        
        vector<int> dp(n+1, -1);
        int first = climbing(cost, 0, n, dp);
        
        dp.clear();
        int second = climbing(cost, 1, n, dp);
        
        return min(first, second);
    }
};
