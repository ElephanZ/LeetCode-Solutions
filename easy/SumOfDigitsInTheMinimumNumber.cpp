class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        unsigned int counter = 0;
        int minimum = numeric_limits<int>::max();
        
        for (auto num: nums)
            if (num < minimum)
                minimum = num;
        
        while (minimum > 0) {
            counter += minimum % 10;
            minimum /= 10;
        }
        
        return (counter % 2) == 0;
    }
};
