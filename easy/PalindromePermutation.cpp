// runtime: 0ms, faster than 100.00% of C++ online submissions for Palindrome Permutation
// memory usage: 6.1MB, less than 72.48% of C++ online submissions for Palindrome Permutation

class Solution {
public:
    bool canPermutePalindrome(string s) {
        unsigned int counters[26] {0};
        
        for (auto c: s)
            counters[c - 'a']++;
        
        bool justOnce = false;
        
        for (int i = 0; i < 26; i++) {
            if (counters[i] % 2 != 0) {
                if (justOnce)
                    return false;
                
                justOnce = true;
            }
        }
            
        return true;
    }
};
