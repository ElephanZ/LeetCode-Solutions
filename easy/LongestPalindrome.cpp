// runtime: 0ms, faster than 100% of C++ online submissions for Longest Palindrome
// memory usage: 6.3MB, less than 17.91% of C++ online submissions for Longest Palindrome

class Solution {
public:
    int longestPalindrome(string s) {       
        int counter[256] {0};
        int sol = 0;
        int n = s.length();
        
        for (auto c: s)
            counter[c]++;
        
        for (int i = 0; i < 256; i++) {
            if (counter[i] == n)
                return n;
            
            if (counter[i] % 2 == 0) sol += counter[i];
            else if (counter[i] >= 3) sol += counter[i]-1;
        }
        
        return n > sol ? sol+1 : sol;
    }
};
