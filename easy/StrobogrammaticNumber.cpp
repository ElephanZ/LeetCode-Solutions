// runtime: 0ms, faster than 100% of C++ online submissions for Strobogrammatic Number
// memory usage: 5.8MB, less than 97.32% of C++ online submissions for Strobogrammatic Number

class Solution {
public:
    void rotate180(char &c) {
        if (c == '6') c = '9';
        else if (c == '9') c = '6';
    }
    
    bool isOkay(char d) {
        return d == '0' || d == '1' || d == '6' || d == '8' || d == '9';
    }
    
    bool isStrobogrammatic(string num) {
        string original = num;
        reverse(num.begin(), num.end());
        
        for (auto &digit: num) {
            if (!isOkay(digit))
                return false;
            
            rotate180(digit);
        }
        
        return num == original;
    }
};
