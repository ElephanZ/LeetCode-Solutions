// runtime: 15ms, faster than 58.36% of C++ online submissions for Roman to Integer
// memory usage: 7.8MB, less than 44.68% of C++ online submissions for Roman to Integer

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        
        int res = 0;
        char prev = '-';
        
        for (auto c: s) {
            res += roman[c];
            
            if ((c == 'V' || c == 'X') && prev == 'I')
                res -= 2;
            else if ((c == 'L' || c == 'C') && prev == 'X')
                res -= 20;
            else if ((c == 'D' || c == 'M') && prev == 'C')
                res -= 200;
            
            prev = c;
        }
        
        return res;
    }
};
