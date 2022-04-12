// runtime: 10ms, faster than 31.60% of C++ online submissions for Valid Palindrome
// memory usage: 7.5MB, less than 44.80% of C++ online submissions for Valid Palindrome

class Solution {
public:
    char normalize(char c) {
        if (c >= 'A' && c <= 'Z') return c+32;
        return c;
    }
    
    bool is_allowed(char c) {
        if (c >= 'a' && c <= 'z') return true;
        if (c >= '0' && c <= '9') return true;
        return false;
    }
    
    bool isPalindrome(string s) {
        string adapted = "";
        
        for (auto &c: s) 
            if (is_allowed(normalize(c)))
                adapted += normalize(c);
        
        int n = adapted.length();
        for (int i = 0, j = n-1; i < j; i++, j--)
            if (adapted[i] != adapted[j])
                return false;
        
        return true;
    }
};
