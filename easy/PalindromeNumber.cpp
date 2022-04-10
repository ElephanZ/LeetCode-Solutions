// runtime: 8ms, faster than 90.76% of C++ online submissions for Palindrome Number
// memory usage: 5.9MB, less than 75.62% of C++ online submissions for Palindrome Number

class Solution {
public:
    bool pal(string s, int l, int r) {
        if (l >= r) return true;
        if (s[l] != s[r]) return false;
        return pal(s, l+1, r-1);
    }
    
    bool isPalindrome(int x) {
        string number = to_string(x);
        return pal(number, 0, number.length()-1);
    }
};
