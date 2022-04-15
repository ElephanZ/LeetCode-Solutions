// runtime: 14ms, faster than 91.02% of C++ online submissions for Can Place Flowers
// memory usage: 20.3MB, less than 21.26% of C++ online submissions for Can Place Flowers

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
                
        if (m < 1)
            return n;
        if (n == 0)
            return true;
        
        if (m == 1) {
            if (n > 1) return false;
            return flowerbed[0] ^ n;
        }
        
        if (!flowerbed[0] && !flowerbed[1])
            n--, flowerbed[0] = 1;
        
        for (int i = 1; i < m-1 && n > 0; i++)
            if (!flowerbed[i] && !flowerbed[i-1] && !flowerbed[i+1])
                n--, flowerbed[i] = 1;
        
        if (n > 0 && !flowerbed[m-2] && !flowerbed[m-1])
            n--, flowerbed[m-1] = 1;
        
        return n == 0;
    }
};
