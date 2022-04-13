// runtime: 3ms, faster than 55.28% of C++ online submissions for Happy Number
// memory usage: 6.9MB, less than 23.77% of C++ online submissions for Happy Number

class Solution {
public:   
    bool isHappy(int n) {
        int powers[10] {0, 1, 4, 9, 16, 25, 36, 49, 64, 81};
        unordered_set<int> used;
        
        while (n != 1) {
            if (used.find(n) != used.end())
                return false;
            
            used.insert(n);
            
            int digits[10] {0};
            
            for (int i = 0; n != 0; i++, n /= 10)
                digits[i] = n % 10;
            
            for (int i = 0; i < 10; i++)
                n += powers[digits[i]];
        }
        
        return true;
    }
};
