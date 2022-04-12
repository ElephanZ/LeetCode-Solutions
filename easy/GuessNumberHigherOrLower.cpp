// runtime: 0ms, faster than 100% of C++ online submissions for Guess Number Higher or Lower
// memory usage: 5.8MB, less than 67.98% of C++ online submissions for Guess Number Higher or Lower

class Solution {
public:
    int guessNumber(int n) {
        int l = 0, r = n, m;
        
        while (l <= r) {
            m = l + (r-l) / 2;
            int tmp = guess(m);
            
            if (tmp == 0) break;
            else if (tmp == 1) l = m+1;
            else r = m-1;
        }
        
        return m;
    }
};
