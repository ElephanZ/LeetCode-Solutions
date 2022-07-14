// runtime: 23ms, faster than 67.57% of C++ online submissions for How Many Apples Can You Put into the Basket
// memory usage: 14.9MB, less than 30.63% of C++ online submissions for How Many Apples Can You Put into the Basket

class Solution {
public:
    int maxNumberOfApples(vector<int>& weight) {
        int basket = 5000;
        unsigned int cnt = 0;
        
        sort(weight.begin(), weight.end());
        
        for (auto w: weight) {
            if (basket - w < 0) break;
            
            basket -= w;
            cnt++;
        }
        
        return cnt;
    }
};
