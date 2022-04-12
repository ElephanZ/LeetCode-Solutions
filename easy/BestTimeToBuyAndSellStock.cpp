// runtime: 132ms, faster than 81.33% of C++ online submissions for Best Time to Buy and Sell Stock
// memory usage: 93.3MB, less than 90.08% of C++ online submissions for Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = 0, min_price = numeric_limits<int>::max();
        int n = prices.size();
        
        for (int i = 0; i < n; i++) {
            if (prices[i] - min_price > price)
                price = prices[i] - min_price;
            if (prices[i] < min_price)
                min_price = prices[i];
        }
        
        return price;
    }
};
